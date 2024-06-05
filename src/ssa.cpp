#include "ssa.h"
#include "bg_llvm.h"
#include "graph.hpp"
#include "liveness.h"
#include "printLLVM.h"
#include <cassert>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <iterator>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
using namespace LLVMIR;
using namespace GRAPH;
struct imm_Dominator {
    LLVMIR::L_block* pred;
    unordered_set<LLVMIR::L_block*> succs;
};

unordered_map<L_block*, unordered_set<L_block*>> dominators;
unordered_map<L_block*, imm_Dominator> tree_dominators;
unordered_map<L_block*, unordered_set<L_block*>> DF_array;
unordered_map<L_block*, Node<LLVMIR::L_block*>*> revers_graph; //存储block到node的映射
unordered_map<Temp_temp*, AS_operand*> temp2ASoper;
AS_operand* AS_operand_zero = AS_Operand_Const(0);

static void init_table() {
    dominators.clear();
    tree_dominators.clear();
    DF_array.clear();
    revers_graph.clear();
    temp2ASoper.clear();
}

LLVMIR::L_prog* SSA(LLVMIR::L_prog* prog) {
    for (auto& fun : prog->funcs) {
        init_table();
        combine_addr(fun);
        remove_unused_block(fun);
        mem2reg(fun);

        auto RA_bg = Create_bg(fun->blocks);
        // SingleSourceGraph(RA_bg.mynodes[0], RA_bg, fun);
        //Show_graph(stdout,RA_bg);
        Liveness(RA_bg.mynodes[0], RA_bg, fun->args);
        // Show_Liveness(stdout, RA_bg);
        Dominators(RA_bg);
        // printf_domi();
        tree_Dominators(RA_bg);
        // printf_D_tree();

        for (auto& [id, node] : RA_bg.mynodes) {
            revers_graph[node->info] = node;
        }
        // 默认0是入口block
        computeDF(RA_bg, RA_bg.mynodes[0]);
        // printf_DF();
        Place_phi_fu(RA_bg, fun);
        Rename(RA_bg);
        combine_addr(fun);
    }
    return prog;
}

static bool is_mem_variable(L_stm* stm) {
    return stm->type == L_StmKind::T_ALLOCA &&
           stm->u.ALLOCA->dst->kind == OperandKind::TEMP &&
           stm->u.ALLOCA->dst->u.TEMP->type == TempType::INT_PTR &&
           stm->u.ALLOCA->dst->u.TEMP->len == 0;
}

// 保证相同的AS_operand,地址一样 。常量除外
void combine_addr(LLVMIR::L_func* fun) {
    unordered_map<Temp_temp*, unordered_set<AS_operand**>> temp_set;
    unordered_map<Name_name*, unordered_set<AS_operand**>> name_set;
    for (auto& block : fun->blocks) {
        for (auto& stm : block->instrs) {
            auto AS_operand_list = get_all_AS_operand(stm);
            for (auto AS_op : AS_operand_list) {
                if ((*AS_op)->kind == OperandKind::TEMP) {
                    temp_set[(*AS_op)->u.TEMP].insert(AS_op);
                } else if ((*AS_op)->kind == OperandKind::NAME) {
                    name_set[(*AS_op)->u.NAME].insert(AS_op);
                }
            }
        }
    }
    for (auto temp : temp_set) {
        AS_operand* fi_AS_op = **temp.second.begin();
        for (auto AS_op : temp.second) {
            *AS_op = fi_AS_op;
        }
    }
    for (auto name : name_set) {
        AS_operand* fi_AS_op = **name.second.begin();
        for (auto AS_op : name.second) {
            *AS_op = fi_AS_op;
        }
    }
}

void mem2reg(L_func* fun) {
    //   Todo
    unordered_map<AS_operand*, AS_operand*> AS_operands_stack;  //函数栈上的标量
    unordered_map<AS_operand*, AS_operand*> AS_operands_replace;  //load替换
    for(auto& stm : fun->blocks.front()->instrs){  //把入口块的alloca指令的dst替换成temp
        if(is_mem_variable(stm)){
            auto temp = Temp_newtemp_int();
            auto AS_op = new AS_operand();
            AS_op->kind = OperandKind::TEMP;
            AS_op->u.TEMP = temp;
            AS_operands_stack[stm->u.ALLOCA->dst] = AS_op;
            temp2ASoper[AS_op->u.TEMP] = AS_op;
        }
    }

    for(auto& block : fun->blocks){
        std::list<L_stm*> new_instrs;
        for(auto& stm : block->instrs){
            switch(stm->type){
                case L_StmKind::T_LOAD:{
                    if(AS_operands_stack.find(stm->u.LOAD->ptr) != AS_operands_stack.end()){
                        AS_operands_replace[stm->u.LOAD->dst] = AS_operands_stack[stm->u.LOAD->ptr];  //替换
                    }
                    else{
                        new_instrs.push_back(stm);
                    }
                } break;
                case L_StmKind::T_STORE:{
                    if(AS_operands_stack.find(stm->u.STORE->ptr) != AS_operands_stack.end()){
                        if(AS_operands_replace.find(stm->u.STORE->src) != AS_operands_replace.end()){
                            new_instrs.push_back(L_Move(AS_operands_replace[stm->u.STORE->src], AS_operands_stack[stm->u.STORE->ptr]));
                        }
                        else{
                            new_instrs.push_back(L_Move(stm->u.STORE->src, AS_operands_stack[stm->u.STORE->ptr]));
                        }
                    }
                    else{
                        auto AS_operand_list = get_all_AS_operand(stm);
                        for(auto AS_op : AS_operand_list){
                            if(AS_operands_replace.find(*AS_op) != AS_operands_replace.end()){
                                *AS_op = AS_operands_replace[*AS_op];
                            }
                        }
                        new_instrs.push_back(stm);
                    }
                } break;
                case L_StmKind::T_ALLOCA:{  
                    if(AS_operands_stack.find(stm->u.ALLOCA->dst) != AS_operands_stack.end()){ 
                        new_instrs.push_back(L_Move(AS_Operand_Const(0), AS_operands_stack[stm->u.ALLOCA->dst]));  //重写分配则初始化为0
                    }
                    else{
                        new_instrs.push_back(stm);
                    }
                } break;
                default:{
                    auto AS_operand_list = get_all_AS_operand(stm);
                    for(auto AS_op : AS_operand_list){
                        if(AS_operands_replace.find(*AS_op) != AS_operands_replace.end()){
                            *AS_op = AS_operands_replace[*AS_op];
                        }
                    }
                    new_instrs.push_back(stm);
                } break;
            }
            }
        block->instrs = new_instrs;
    }
}

template <typename T>
unordered_set<T> set_intersection(unordered_set<T>& a, unordered_set<T>& b) {
    unordered_set<T> ret;
    for (auto& x : a) {
        if (b.find(x) != b.end()) {
            ret.insert(x);
        }
    }
    return ret;
}

template <typename T>
bool set_equal(unordered_set<T>& a, unordered_set<T>& b) {
    return a.size() == b.size() && set_intersection(a, b).size() == a.size();
}

void Dominators(GRAPH::Graph<LLVMIR::L_block*>& bg) {
    //   Todo
    // 获取所有基本块节点
    std::unordered_map<int, Node<LLVMIR::L_block*>*> label_to_node;
    std::unordered_map<Node<LLVMIR::L_block*>*, std::unordered_set<Node<LLVMIR::L_block*>*>> dominators_node;
    for (auto& node_pair : bg.mynodes) {
        label_to_node[node_pair.first] = node_pair.second;
    }

    if (label_to_node.empty()) {
        return;
    }
    
    Node<LLVMIR::L_block*>* entry ; // 入口块
    for (auto& node_pair : bg.mynodes) {
        if(node_pair.first == 0){
            entry = node_pair.second;
            break;
        }
    }
     std::unordered_set<Node<LLVMIR::L_block*>*> all_nodes;
     for (const auto& pair : label_to_node) {
        all_nodes.insert(pair.second);
    }
    // 初始化
    for (auto node : all_nodes) {
        if (node == entry) {
            dominators_node[node] = { node }; // 入口块支配自己
        } else {
            dominators_node[node] = all_nodes; // 其他块初始时被所有块支配
        }
    }
    bool changed = true;
    // 迭代直到支配者集合不再变化
    while (changed) {
        changed = false;

        for (auto node : all_nodes) {
            if (node == entry) {
                continue; // 跳过入口块
            }

            // 计算新支配者集合
            std::unordered_set<Node<LLVMIR::L_block*>*> new_dominators = all_nodes;

            for (auto pred : *(node->pred())) {
                auto pred_node =bg.mynodes[pred];
                std::unordered_set<Node<LLVMIR::L_block*>*> intersect;
                auto pred_dominators = dominators_node[pred_node];

                // 交集
                new_dominators = set_intersection(new_dominators, pred_dominators);
            }

            new_dominators.insert(node); // 加上自身

            // 检查支配者集合是否变化
            if (new_dominators != dominators_node[node]) {
                dominators_node[node] = new_dominators;
                changed = true;
            }
        }
    }
    for (const auto& pair : dominators_node) {
        dominators[pair.first->info] = {};
        for (auto dom : pair.second) {
            dominators[pair.first->info].insert(dom->info);
        }
    }
}


void printf_domi() {
    printf("Dominator:\n");
    for (auto x : dominators) {
        printf("%s :\n", x.first->label->name.c_str());
        for (auto t : x.second) {
            printf("%s ", t->label->name.c_str());
        }
        printf("\n\n");
    }
}

void printf_D_tree() {
    printf("dominator tree:\n");
    for (auto x : tree_dominators) {
        printf("%s :\n", x.first->label->name.c_str());
        for (auto t : x.second.succs) {
            printf("%s ", t->label->name.c_str());
        }
        printf("\n\n");
    }
}
void printf_DF() {
    printf("DF:\n");
    for (auto x : DF_array) {
        printf("%s :\n", x.first->label->name.c_str());
        for (auto t : x.second) {
            printf("%s ", t->label->name.c_str());
        }
        printf("\n\n");
    }
}

void tree_Dominators(GRAPH::Graph<LLVMIR::L_block*>& bg) {
    //   Todo
    for(auto& pair : bg.mynodes){
        if(pair.first == 0){
            continue;
        }
        auto& node = pair.second;
        auto& block = node->info;
        auto& doms = dominators[block];
        for(auto dom : doms){
            if(dom == block){
                continue;
            }
            bool is_other_dom = true;
            for(auto other_dom : doms){
                if(other_dom == block || other_dom == dom){
                    continue;
                }
                if(dominators[other_dom].find(dom) != dominators[other_dom].end()){
                    is_other_dom = false;
                    break;
                }
            }
            if(is_other_dom){
                tree_dominators[dom].succs.insert(block);
                tree_dominators[block].pred = dom;
                break;
            }
        }
    }
}

void computeDF(GRAPH::Graph<LLVMIR::L_block*>& bg, GRAPH::Node<LLVMIR::L_block*>* r) {
    //   Todo
    unordered_set<L_block*> S{};
    for(auto succ_num : r->succs){
        auto succ_blcok = bg.mynodes[succ_num]->info;
        if(tree_dominators[succ_blcok].pred != r->info){
            S.insert(succ_blcok);
        }
    }
    for(auto& child : tree_dominators[r->info].succs){
        computeDF(bg, revers_graph[child]);
        for(auto& w : DF_array[child]){
            if(dominators[w].find(r->info) == dominators[w].end() || w == r->info){
                S.insert(w);
            }
        }
    }
    DF_array[r->info] = S;
}

// 只对标量做
void Place_phi_fu(GRAPH::Graph<LLVMIR::L_block*>& bg, L_func* fun) {
    //   Todo
    unordered_map<Temp_temp*, unordered_set<L_block*>> defsites;
    unordered_map<L_block*, unordered_set<Temp_temp*>> A_phi;
    for(auto& pair : bg.mynodes){
        for(auto a : FG_def(pair.second)){
            defsites[a].insert(pair.second->info);
        }
    }

    for(auto& pair :defsites){
        auto& a = pair.first;
        auto& w = pair.second;
        while(!w.empty()){
            auto n = *w.begin();
            w.erase(n);
            for(auto y : DF_array[n]){
                auto y_node = revers_graph[y];
                auto& y_def = FG_def(y_node);
                if(A_phi[y].find(a) == A_phi[y].end() && FG_In(y_node).find(a) != FG_In(y_node).end()){ //只对在该节点live in的变量进行插phi
                    A_phi[y].insert(a);
                    if (y_def.find(a) == y_def.end()) {
                        w.insert(y);
                    }
                }
            }
        }
    }
    
    for(auto& pair : bg.mynodes){
        auto node = pair.second;
        for(auto a : A_phi[node->info]){
            std::vector<std::pair<AS_operand*,Temp_label*>> phis{};
            for (auto y : node->preds) {
                auto y_node = bg.mynodes[y];
                phis.push_back({temp2ASoper[a], y_node->info->label});
            }
            node->info->instrs.insert(++node->info->instrs.begin(), L_Phi(temp2ASoper[a], phis));
        }
    }
}

static list<AS_operand**> get_def_int_operand(LLVMIR::L_stm* stm) {
    list<AS_operand**> ret1 = get_def_operand(stm), ret2;
    for (auto AS_op : ret1) {
        if ((**AS_op).kind == OperandKind::TEMP && (**AS_op).u.TEMP->type == TempType::INT_TEMP) {
            ret2.push_back(AS_op);
        }
    }
    return ret2;
}

static list<AS_operand**> get_use_int_operand(LLVMIR::L_stm* stm) {
    list<AS_operand**> ret1 = get_use_operand(stm), ret2;
    for (auto AS_op : ret1) {
        if ((**AS_op).kind == OperandKind::TEMP && (**AS_op).u.TEMP->type == TempType::INT_TEMP) {
            ret2.push_back(AS_op);
        }
    }
    return ret2;
}

static void Rename_temp(GRAPH::Graph<LLVMIR::L_block*>& bg, GRAPH::Node<LLVMIR::L_block*>* n, unordered_map<Temp_temp*, stack<Temp_temp*>>& Stack) {
    //   Todo
    std::vector<Temp_temp*> stack_old;
    for(auto& stm : n->info->instrs){
        if(stm->type != L_StmKind::T_PHI){
            auto temp_use = get_use_int_operand(stm);
            for(auto AS_op : temp_use){
                auto old_temp = (*AS_op)->u.TEMP;
               if (Stack.find(old_temp) != Stack.end()) {
                    *AS_op = AS_Operand_Temp(Stack[old_temp].top());
                }
            }
        }
        auto temp_def = get_def_int_operand(stm);
        for(auto AS_op : temp_def){
            if(Stack.find((*AS_op)->u.TEMP) != Stack.end()){
                auto i = Temp_newtemp_int();
                Stack[(*AS_op)->u.TEMP].push(i);
                stack_old.push_back((*AS_op)->u.TEMP);
                *AS_op = AS_Operand_Temp(i);
            }
        }
    }

    for(auto& succ_num : n->succs){
        auto succ = bg.mynodes[succ_num];
        for(auto& stm : succ->info->instrs){
            if(stm->type == L_StmKind::T_PHI){
                for (auto& [AS_op, label] : stm->u.PHI->phis){
                    if(label != n->info->label){
                        continue;
                    }
                    auto will_replace_temp = AS_op->u.TEMP;
                    if(Stack.find(will_replace_temp) != Stack.end()){
                        auto i = Stack[will_replace_temp].top();
                        AS_op = AS_Operand_Temp(i);
                    }
                }
            }
        }
        
    }

    for(auto succ : tree_dominators[n->info].succs){
        Rename_temp(bg, revers_graph[succ], Stack);
    }
    for(auto a : stack_old){
        Stack[a].pop();
    }
}

void Rename(GRAPH::Graph<LLVMIR::L_block*>& bg) {
    //   Todo
    unordered_map<Temp_temp*, stack<Temp_temp*>> Stack;
    for (auto [temp, _]: temp2ASoper) {
        Stack[temp].push(temp);
    }
    Rename_temp(bg, bg.mynodes[0], Stack);
}

void remove_unused_block(L_func* fun) {
    queue<L_block*> q;
    set<L_block*> used;
    unordered_map<Temp_label*, L_block*> label2block;
    for (auto block : fun->blocks) {
        label2block[block->label] = block;
    }
    q.push(fun->blocks.front());
    used.insert(fun->blocks.front());
    while (!q.empty()) {
        auto block = q.front();
        q.pop();
        for (auto succ : block->succs) {
            auto succ_block = label2block[succ];
            if (used.find(succ_block) == used.end()) {
                q.push(succ_block);
                used.insert(succ_block);
            }
        }
    }

    for (auto it = fun->blocks.begin(); it != fun->blocks.end();) {
        if (used.find(*it) == used.end()) {
            it = fun->blocks.erase(it);
        } else {
            ++it;
        }
    }
}