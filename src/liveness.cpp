#include "liveness.h"

#include <unordered_map>
#include <unordered_set>

#include "graph.hpp"
#include "llvm_ir.h"
#include "temp.h"

using namespace std;
using namespace LLVMIR;
using namespace GRAPH;

struct inOut {
  TempSet_ in;
  TempSet_ out;
};

struct useDef {
  TempSet_ use;
  TempSet_ def;
};

static unordered_map<GRAPH::Node<LLVMIR::L_block *> *, inOut> InOutTable;
static unordered_map<GRAPH::Node<LLVMIR::L_block *> *, useDef> UseDefTable;

list<AS_operand **> get_all_AS_operand(L_stm *stm) {
  list<AS_operand **> AS_operand_list;
  switch (stm->type) {
    case L_StmKind::T_BINOP: {
      AS_operand_list.push_back(&(stm->u.BINOP->left));
      AS_operand_list.push_back(&(stm->u.BINOP->right));
      AS_operand_list.push_back(&(stm->u.BINOP->dst));
    } break;
    case L_StmKind::T_LOAD: {
      AS_operand_list.push_back(&(stm->u.LOAD->dst));
      AS_operand_list.push_back(&(stm->u.LOAD->ptr));
    } break;
    case L_StmKind::T_STORE: {
      AS_operand_list.push_back(&(stm->u.STORE->src));
      AS_operand_list.push_back(&(stm->u.STORE->ptr));
    } break;
    case L_StmKind::T_LABEL: {
    } break;
    case L_StmKind::T_JUMP: {
    } break;
    case L_StmKind::T_CMP: {
      AS_operand_list.push_back(&(stm->u.CMP->left));
      AS_operand_list.push_back(&(stm->u.CMP->right));
      AS_operand_list.push_back(&(stm->u.CMP->dst));
    } break;
    case L_StmKind::T_CJUMP: {
      AS_operand_list.push_back(&(stm->u.CJUMP->dst));
    } break;
    case L_StmKind::T_MOVE: {
      AS_operand_list.push_back(&(stm->u.MOVE->src));
      AS_operand_list.push_back(&(stm->u.MOVE->dst));
    } break;
    case L_StmKind::T_CALL: {
      AS_operand_list.push_back(&(stm->u.CALL->res));
      for (auto &arg : stm->u.CALL->args) {
        AS_operand_list.push_back(&arg);
      }
    } break;
    case L_StmKind::T_VOID_CALL: {
      for (auto &arg : stm->u.VOID_CALL->args) {
        AS_operand_list.push_back(&arg);
      }
    } break;
    case L_StmKind::T_RETURN: {
      if (stm->u.RET->ret != nullptr)
        AS_operand_list.push_back(&(stm->u.RET->ret));
    } break;
    case L_StmKind::T_PHI: {
      AS_operand_list.push_back(&(stm->u.PHI->dst));
      for (auto &phi : stm->u.PHI->phis) {
        AS_operand_list.push_back(&(phi.first));
      }
    } break;
    case L_StmKind::T_ALLOCA: {
      AS_operand_list.push_back(&(stm->u.ALLOCA->dst));
    } break;
    case L_StmKind::T_GEP: {
      AS_operand_list.push_back(&(stm->u.GEP->new_ptr));
      AS_operand_list.push_back(&(stm->u.GEP->base_ptr));
      AS_operand_list.push_back(&(stm->u.GEP->index));
    } break;
    default: {
      printf("%d\n", (int)stm->type);
      assert(0);
    }
  }
  return AS_operand_list;
}

std::list<AS_operand **> get_def_operand(L_stm *stm) {
  //   Todo
  list<AS_operand **> AS_operand_list;
  switch (stm->type) {
    case L_StmKind::T_BINOP: {
      AS_operand_list.push_back(&(stm->u.BINOP->dst));
    } break;
    case L_StmKind::T_LOAD: {
      AS_operand_list.push_back(&(stm->u.LOAD->dst));
    } break;
    case L_StmKind::T_STORE: {
    } break;
    case L_StmKind::T_LABEL: {
    } break;
    case L_StmKind::T_JUMP: {
    } break;
    case L_StmKind::T_CMP: {
      AS_operand_list.push_back(&(stm->u.CMP->dst));
    } break;
    case L_StmKind::T_CJUMP: {
    } break;
    case L_StmKind::T_MOVE: {
      AS_operand_list.push_back(&(stm->u.MOVE->dst));
    } break;
    case L_StmKind::T_CALL: {
      AS_operand_list.push_back(&(stm->u.CALL->res));
    } break;
    case L_StmKind::T_VOID_CALL: {
    } break;
    case L_StmKind::T_RETURN: {
    } break;
    case L_StmKind::T_PHI: {
      AS_operand_list.push_back(&(stm->u.PHI->dst));
    } break;
    case L_StmKind::T_ALLOCA: {
    } break;
    case L_StmKind::T_GEP: {
    } break;
    default: {
      printf("%d\n", (int)stm->type);
      assert(0);
    }
  }
  return AS_operand_list;
}
list<Temp_temp *> get_def(L_stm *stm) {  // 临时变量
  auto AS_operand_list = get_def_operand(stm);
  list<Temp_temp *> Temp_list;
  for (auto AS_op : AS_operand_list) {
    Temp_list.push_back((*AS_op)->u.TEMP);
  }
  return Temp_list;
}

std::list<AS_operand **> get_use_operand(L_stm *stm) {
  //   Todo
  list<AS_operand **> AS_operand_list;
  switch (stm->type) {
    case L_StmKind::T_BINOP: {
      AS_operand_list.push_back(&(stm->u.BINOP->left));
      AS_operand_list.push_back(&(stm->u.BINOP->right));
    } break;
    case L_StmKind::T_LOAD: {
    } break;
    case L_StmKind::T_STORE: {
      AS_operand_list.push_back(&(stm->u.STORE->src));
    } break;
    case L_StmKind::T_LABEL: {
    } break;
    case L_StmKind::T_JUMP: {
    } break;
    case L_StmKind::T_CMP: {
      AS_operand_list.push_back(&(stm->u.CMP->left));
      AS_operand_list.push_back(&(stm->u.CMP->right));
    } break;
    case L_StmKind::T_CJUMP: {
      AS_operand_list.push_back(&(stm->u.CJUMP->dst));
    } break;
    case L_StmKind::T_MOVE: {
      AS_operand_list.push_back(&(stm->u.MOVE->src));
    } break;
    case L_StmKind::T_CALL: {
      for (auto &arg : stm->u.CALL->args) {
        AS_operand_list.push_back(&arg);
      }
    } break;
    case L_StmKind::T_VOID_CALL: {
      for (auto &arg : stm->u.VOID_CALL->args) {
        AS_operand_list.push_back(&arg);
      }
    } break;
    case L_StmKind::T_RETURN: {
      if (stm->u.RET->ret != nullptr)
        AS_operand_list.push_back(&(stm->u.RET->ret));
    } break;
    case L_StmKind::T_PHI: {
      for (auto &phi : stm->u.PHI->phis) {
        AS_operand_list.push_back(&(phi.first));
      }
    } break;
    case L_StmKind::T_ALLOCA: {
    } break;
    case L_StmKind::T_GEP: {
      AS_operand_list.push_back(&(stm->u.GEP->index));
    } break;
    default: {
      printf("%d\n", (int)stm->type);
      assert(0);
    }
  }
  return AS_operand_list;
}

list<Temp_temp *> get_use(L_stm *stm) {
  auto AS_operand_list = get_use_operand(stm);
  list<Temp_temp *> Temp_list;
  for (auto AS_op : AS_operand_list) {
    Temp_list.push_back((*AS_op)->u.TEMP);
  }
  return Temp_list;
}

static void init_INOUT() {
  InOutTable.clear();
  UseDefTable.clear();
}

TempSet_ &FG_Out(GRAPH::Node<LLVMIR::L_block *> *r) {
  return InOutTable[r].out;
}
TempSet_ &FG_In(GRAPH::Node<LLVMIR::L_block *> *r) { return InOutTable[r].in; }
TempSet_ &FG_def(GRAPH::Node<LLVMIR::L_block *> *r) {
  return UseDefTable[r].def;
}
TempSet_ &FG_use(GRAPH::Node<LLVMIR::L_block *> *r) {
  return UseDefTable[r].use;
}

static void Use_def(GRAPH::Node<LLVMIR::L_block *> *r,
                    GRAPH::Graph<LLVMIR::L_block *> &bg,
                    std::vector<Temp_temp *> &args) {
  //    Todo
  for (const auto [key, node] : bg.mynodes) {
    auto& def = FG_def(node);
    auto& use = FG_use(node);
    def.clear();
    use.clear();
    for( auto stm : node->info->instrs){
      auto def_temp = get_def(stm);
      auto use_temp = get_use(stm);
      for (auto temp : use_temp) {
        if (def.find(temp) == def.end())
            use.insert(temp);
      }
      def.insert(def_temp.begin(), def_temp.end());
    }
  }
}
static int gi = 0;
static bool LivenessIteration(GRAPH::Node<LLVMIR::L_block *> *r,
                              GRAPH::Graph<LLVMIR::L_block *> &bg) {  
  //    Todo
  //计算每个块in，out
  bool changed = false;
  for (auto it = bg.mynodes.rbegin(); it != bg.mynodes.rend(); it++) {
    auto node = it->second;
    auto& old_in = InOutTable[node].in;
    auto& old_out = InOutTable[node].out;
    auto& def = UseDefTable[node].def;
    auto& use = UseDefTable[node].use;
    // out[n]=\bigcup_{s\in succ[n]}in[s]\end{aligned}
    TempSet_ new_out{};
    for (auto succ : node->succs) { 
            auto succ_in = FG_In(bg.mynodes[succ]);
            new_out.insert(succ_in.begin(), succ_in.end());
    }

    //in[n]=use[n]\cup(out[n]-def[n])
    TempSet_ new_in = old_out;
    for (auto temp : def) {
            new_in.erase(temp);
    }
    new_in.insert(use.begin(), use.end());
    if (old_in != new_in || old_out != new_out) {
        changed = true;
        old_in = new_in;
        old_out = new_out;   
    }
  }
  return changed;
}

void PrintTemps(FILE *out, TempSet set) {
  for (auto x : *set) {
    printf("%d  ", x->num);
  }
}

void Show_Liveness(FILE *out, GRAPH::Graph<LLVMIR::L_block *> &bg) {
  fprintf(out, "\n\nNumber of iterations=%d\n\n", gi);
  for (auto block_node : bg.mynodes) {
    fprintf(out, "----------------------\n");
    printf("block %s \n", block_node.second->info->label->name.c_str());
    fprintf(out, "def=\n");
    PrintTemps(out, &FG_def(block_node.second));
    fprintf(out, "\n");
    fprintf(out, "use=\n");
    PrintTemps(out, &FG_use(block_node.second));
    fprintf(out, "\n");
    fprintf(out, "In=\n");
    PrintTemps(out, &FG_In(block_node.second));
    fprintf(out, "\n");
    fprintf(out, "Out=\n");
    PrintTemps(out, &FG_Out(block_node.second));
    fprintf(out, "\n");
  }
}
// 以block为单位
void Liveness(GRAPH::Node<LLVMIR::L_block *> *r,
              GRAPH::Graph<LLVMIR::L_block *> &bg,
              std::vector<Temp_temp *> &args) {
  init_INOUT();
  Use_def(r, bg, args);
  gi = 0;
  bool changed = true;
  while (changed){
    changed = LivenessIteration(r, bg);
  }
}

