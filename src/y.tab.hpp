/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    SUB = 259,
    MUL = 260,
    DIV = 261,
    SEMICOLON = 262,
    LPAREN = 263,
    RPAREN = 264,
    LEFT_BRACKET = 265,
    RIGHT_BRACKET = 266,
    LBRACE = 267,
    RBRACE = 268,
    ASSIGN = 269,
    EQ = 270,
    NEQ = 271,
    LT = 272,
    GT = 273,
    LE = 274,
    GE = 275,
    NOT = 276,
    IF = 277,
    ELSE = 278,
    WHILE = 279,
    FOR = 280,
    RETURN = 281,
    BREAK = 282,
    LET = 283,
    COLON = 284,
    ARROW = 285,
    COMMA = 286,
    FN = 287,
    CONT = 288,
    AND = 289,
    OR = 290,
    INT = 291,
    STRUCT = 292,
    DOT = 293,
    ID = 294,
    NUM = 295
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define SEMICOLON 262
#define LPAREN 263
#define RPAREN 264
#define LEFT_BRACKET 265
#define RIGHT_BRACKET 266
#define LBRACE 267
#define RBRACE 268
#define ASSIGN 269
#define EQ 270
#define NEQ 271
#define LT 272
#define GT 273
#define LE 274
#define GE 275
#define NOT 276
#define IF 277
#define ELSE 278
#define WHILE 279
#define FOR 280
#define RETURN 281
#define BREAK 282
#define LET 283
#define COLON 284
#define ARROW 285
#define COMMA 286
#define FN 287
#define CONT 288
#define AND 289
#define OR 290
#define INT 291
#define STRUCT 292
#define DOT 293
#define ID 294
#define NUM 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "parser.yacc"

  //step1：对应TeaplAst.h中的类型补充
  A_pos pos;  //1
  A_type type;  //2
  A_varDecl varDecl;  //3
  A_varDef varDef;  //4
  A_rightVal rightVal;  //5
  A_arithExpr arithExpr;  //6
  A_boolExpr boolExpr;  //7
  A_arithBiOpExpr arithBiOpExpr;  //8
  A_arithUExpr arithUExpr;//9
  A_exprUnit exprUnit;  //10
  A_fnCall fnCall;  //11
  A_indexExpr indexExpr;  //12
  A_arrayExpr arrayExpr;  //13
  A_memberExpr memberExpr;  //14
  A_boolUnit boolUnit;  //15
  A_boolBiOpExpr boolBiOpExpr;  //16
  A_boolUOpExpr boolUOpExpr;  //17
  A_comExpr comExpr;  //18
  A_leftVal leftVal;  //19
  A_assignStmt assignStmt;  //20
  A_rightValList rightValList;  //21
  A_varDefScalar varDefScalar;  //22
  A_varDefArray varDefArray;  //23
  A_varDeclScalar varDeclScalar;  //24
  A_varDeclArray varDeclArray;  //25
  A_varDeclStmt varDeclStmt;  //26
  A_varDeclList varDeclList;  //27
  A_structDef structDef;  //28
  A_paramDecl paramDecl;  //29
  A_fnDecl fnDecl;  //30
  A_fnDef fnDef;  //31
  A_codeBlockStmt codeBlockStmt;  //32
  A_ifStmt ifStmt;  //33
  A_whileStmt whileStmt;  //34
  A_fnDeclStmt fnDeclStmt;  //35
  A_callStmt callStmt;  //36
  A_returnStmt returnStmt;  //37
  A_programElement programElement;  //38
  A_codeBlockStmtList codeBlockStmtList;  //39
  A_programElementList programElementList;  //40
  A_program program;  //41
  A_tokenId tokenId;  //42
  A_tokenNum tokenNum;  //43

#line 184 "y.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
