/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
// extern int yydebug=1;
}


#line 86 "y.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 265 "y.tab.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

#define YYUNDEFTOK  2
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   165,   171,   176,   183,   187,   193,   197,
     203,   207,   214,   218,   225,   229,   233,   237,   243,   249,
     253,   257,   261,   265,   269,   273,   280,   286,   290,   296,
     303,   312,   316,   320,   327,   331,   339,   348,   352,   356,
     360,   364,   368,   377,   381,   385,   393,   400,   404,   408,
     415,   422,   429,   436,   445,   449,   457,   461,   465,   473,
     480,   488,   492,   499,   508,   512,   516,   520,   524,   528,
     532,   536,   540,   547,   551,   559,   565,   572,   579,   582,
     590,   594,   598,   602,   606,   614,   618,   624,   628,   633
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "SEMICOLON",
  "LPAREN", "RPAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "LBRACE", "RBRACE",
  "ASSIGN", "EQ", "NEQ", "LT", "GT", "LE", "GE", "NOT", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "BREAK", "LET", "COLON", "ARROW", "COMMA",
  "FN", "CONT", "AND", "OR", "INT", "STRUCT", "DOT", "ID", "NUM",
  "$accept", "Type", "VarDecl", "VarDef", "RightVal", "ArithExpr",
  "BoolExpr", "ArithBiOpExpr", "ArithUExpr", "ExprUnit", "FnCall",
  "IndexExpr", "ArrayExpr", "MemberExpr", "BoolUnit", "BoolBiOpExpr",
  "BoolUOpExpr", "ComExpr", "LeftVal", "AssignStmt", "RightValList",
  "VarDefScalar", "VarDefArray", "VarDeclScalar", "VarDeclArray",
  "VarDeclStmt", "VarDeclList", "StructDef", "ParamDecl", "FnDecl",
  "FnDef", "CodeBlockStmt", "IfStmt", "WhileStmt", "FnDeclStmt",
  "CallStmt", "ReturnStmt", "ProgramElement", "CodeBlockStmtList",
  "ProgramElementList", "Program", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
# endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -145,   -25,   -16,   -14,  -145,  -145,    94,  -145,  -145,
       4,  -145,    45,    74,    91,    93,  -145,  -145,  -145,  -145,
      43,    90,  -145,    66,  -145,  -145,    46,    68,  -145,  -145,
      88,    88,  -145,   110,   123,    13,   125,   141,   142,   145,
    -145,  -145,    32,  -145,  -145,    66,  -145,  -145,  -145,  -145,
     146,   147,  -145,  -145,   148,    87,   129,  -145,   152,   150,
      75,    75,     8,  -145,    75,    75,    79,  -145,   157,   151,
      95,  -145,  -145,   126,  -145,    40,    44,  -145,  -145,  -145,
    -145,    81,  -145,  -145,    75,  -145,    -1,    75,   127,  -145,
    -145,   136,    75,   128,    68,    88,   137,  -145,     9,   126,
      76,     8,  -145,   119,    86,  -145,  -145,     8,     8,     8,
       8,    75,    75,     8,     8,     8,     8,     8,     8,   138,
     161,  -145,  -145,   160,   165,  -145,    68,  -145,   162,  -145,
    -145,    68,   163,   164,  -145,  -145,  -145,   103,   103,  -145,
    -145,  -145,   140,  -145,  -145,  -145,  -145,  -145,  -145,    75,
    -145,  -145,  -145,   166,   149,  -145,    66,    66,  -145,   167,
      68,   168,   169,    75,  -145,   154,  -145,   174,   172,  -145,
      66,   173,  -145
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      88,    84,     0,     0,     0,    80,    81,     0,    83,    82,
      88,    89,     0,     0,     0,     0,     6,     7,     4,     5,
       0,     0,    76,    86,    87,     1,     0,     0,    54,    55,
      58,    58,    72,     0,     0,     0,     0,     0,    45,     0,
      43,    44,     0,    65,    64,    86,    67,    68,    66,    69,
       0,     0,     2,     3,    52,     0,    57,    60,     0,     0,
       0,     0,     0,    79,     0,     0,    20,    19,     0,     8,
       9,    10,    25,    11,    22,    23,    24,    13,    12,    33,
      31,     0,    71,    70,    49,    77,     0,     0,     0,    85,
      63,     0,     0,     0,     0,    58,    61,    59,     0,     0,
       0,     0,    18,     0,     0,    36,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    28,    27,     0,     0,    30,     0,    50,     0,    52,
      56,     0,     0,     0,    11,    21,    32,    14,    15,    16,
      17,    35,    34,    42,    41,    39,    37,    38,    40,    49,
      26,    29,    46,    53,     0,    62,    86,    86,    47,     0,
       0,     0,     0,    49,    53,    73,    75,     0,     0,    51,
      86,     0,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,   -91,   183,  -145,   -20,   -33,   -31,  -145,  -145,   -52,
     -23,  -145,   -21,   -19,   122,  -145,  -145,  -145,   -17,  -145,
    -144,  -145,  -145,  -145,  -145,    27,   -24,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   -44,   178,
    -145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    54,    56,    15,   119,    69,    70,    71,    72,    73,
      74,   123,    75,    76,    77,    78,    79,    80,    81,    43,
     120,    16,    17,    18,    19,    44,    57,     6,    58,     7,
       8,    45,    46,    47,     9,    48,    49,    10,    50,    11,
      12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    89,    40,   129,    41,   158,    42,    59,    99,    99,
     102,     1,    62,    99,    13,    68,   101,    62,   132,   167,
      63,    64,    39,    20,    40,    21,    41,     5,    42,    98,
     100,   103,     2,   104,    65,   153,     3,     5,   121,   122,
     155,     4,    86,   111,   112,    25,    87,    66,    67,   134,
     -43,    30,    66,    67,   -44,   134,   134,   134,   134,    99,
      99,   143,   144,   145,   146,   147,   148,   124,   103,   164,
      88,   130,   127,    32,   137,   138,   139,   140,   -43,    62,
     141,   142,   -44,    64,    26,   133,    51,    84,    33,   -45,
      34,    86,    35,    36,     2,   136,    65,    93,    28,    37,
      29,    22,    31,    27,    52,    38,    23,    53,   109,   110,
     111,   112,   161,   162,    66,    67,    94,   -45,    60,    88,
     111,   112,   107,   108,   109,   110,   171,    55,   135,   111,
     112,    61,    82,    39,    39,    40,    40,    41,    41,    42,
      42,   113,   114,   115,   116,   117,   118,    39,    83,    40,
      84,    41,    85,    42,   107,   108,   109,   110,    91,    90,
      95,    96,    92,    97,   106,   126,   125,   131,   128,   149,
     150,   151,   152,   154,   111,   156,   157,   168,   160,   163,
     159,   165,   166,   169,   170,    14,   172,   105,    24
};

static const yytype_uint8 yycheck[] =
{
      23,    45,    23,    94,    23,   149,    23,    31,    60,    61,
      62,     7,     4,    65,    39,    35,     8,     4,     9,   163,
       7,     8,    45,    39,    45,    39,    45,     0,    45,    60,
      61,    64,    28,    64,    21,   126,    32,    10,    39,    40,
     131,    37,    10,    34,    35,     0,    14,    39,    40,   101,
      10,     8,    39,    40,    10,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    87,   101,   160,
      38,    95,    92,     7,   107,   108,   109,   110,    38,     4,
     111,   112,    38,     8,    10,     9,    40,     8,    22,    10,
      24,    10,    26,    27,    28,     9,    21,    10,     7,    33,
       7,     7,    12,    29,    36,    39,    12,    39,     5,     6,
      34,    35,   156,   157,    39,    40,    29,    38,     8,    38,
      34,    35,     3,     4,     5,     6,   170,    39,     9,    34,
      35,     8,     7,   156,   157,   156,   157,   156,   157,   156,
     157,    15,    16,    17,    18,    19,    20,   170,     7,   170,
       8,   170,     7,   170,     3,     4,     5,     6,    11,    13,
      31,     9,    14,    13,     7,    29,    39,    30,    40,    31,
       9,    11,     7,    11,    34,    12,    12,    23,    29,    12,
      14,    13,    13,     9,    12,     2,    13,    65,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    28,    32,    37,    66,    68,    70,    71,    75,
      78,    80,    81,    39,    43,    44,    62,    63,    64,    65,
      39,    39,     7,    12,    80,     0,    10,    29,     7,     7,
       8,    12,     7,    22,    24,    26,    27,    33,    39,    51,
      53,    54,    59,    60,    66,    72,    73,    74,    76,    77,
      79,    40,    36,    39,    42,    39,    43,    67,    69,    67,
       8,     8,     4,     7,     8,    21,    39,    40,    45,    46,
      47,    48,    49,    50,    51,    53,    54,    55,    56,    57,
      58,    59,     7,     7,     8,     7,    10,    14,    38,    79,
      13,    11,    14,    10,    29,    31,     9,    13,    47,    50,
      47,     8,    50,    46,    47,    55,     7,     3,     4,     5,
       6,    34,    35,    15,    16,    17,    18,    19,    20,    45,
      61,    39,    40,    52,    45,    39,    29,    45,    40,    42,
      67,    30,     9,     9,    50,     9,     9,    46,    46,    46,
      46,    47,    47,    50,    50,    50,    50,    50,    50,    31,
       9,    11,     7,    42,    11,    42,    12,    12,    61,    14,
      29,    79,    79,    12,    42,    13,    13,    61,    23,     9,
      12,    79,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    44,    45,    45,
      46,    46,    47,    47,    48,    48,    48,    48,    49,    50,
      50,    50,    50,    50,    50,    50,    51,    52,    52,    53,
      54,    55,    55,    55,    56,    56,    57,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    60,    61,    61,    61,
      62,    63,    64,    65,    66,    66,    67,    67,    67,    68,
      69,    70,    70,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    75,    76,    77,    77,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     4,     1,     1,     4,
       3,     1,     3,     1,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     3,     1,     0,
       5,    10,     3,     6,     3,     3,     3,     1,     0,     5,
       1,     5,     7,     4,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     7,    11,     7,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     2,     0,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 161 "parser.yacc"
{
  (yyval.type) = A_NativeType((yyvsp[0].pos),A_intTypeKind);
}
#line 1568 "y.tab.cpp"
    break;

  case 3:
#line 166 "parser.yacc"
{
  (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1576 "y.tab.cpp"
    break;

  case 4:
#line 172 "parser.yacc"
{
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].varDeclScalar)->pos,(yyvsp[0].varDeclScalar));
}
#line 1584 "y.tab.cpp"
    break;

  case 5:
#line 176 "parser.yacc"
            {
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[0].varDeclArray)->pos,(yyvsp[0].varDeclArray));
}
#line 1592 "y.tab.cpp"
    break;

  case 6:
#line 183 "parser.yacc"
            {
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[0].varDefScalar)->pos,(yyvsp[0].varDefScalar));
}
#line 1600 "y.tab.cpp"
    break;

  case 7:
#line 187 "parser.yacc"
           {
  (yyval.varDef) = A_VarDef_Array((yyvsp[0].varDefArray)->pos,(yyvsp[0].varDefArray));
}
#line 1608 "y.tab.cpp"
    break;

  case 8:
#line 193 "parser.yacc"
         {
  (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos,(yyvsp[0].arithExpr));
}
#line 1616 "y.tab.cpp"
    break;

  case 9:
#line 197 "parser.yacc"
        {
  (yyval.rightVal) = A_BoolExprRVal((yyvsp[0].boolExpr)->pos,(yyvsp[0].boolExpr));
}
#line 1624 "y.tab.cpp"
    break;

  case 10:
#line 203 "parser.yacc"
             {
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[0].arithBiOpExpr)->pos,(yyvsp[0].arithBiOpExpr));
}
#line 1632 "y.tab.cpp"
    break;

  case 11:
#line 207 "parser.yacc"
        {
  (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos,(yyvsp[0].exprUnit));
}
#line 1640 "y.tab.cpp"
    break;

  case 12:
#line 214 "parser.yacc"
            {
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[0].boolBiOpExpr)->pos,(yyvsp[0].boolBiOpExpr));
}
#line 1648 "y.tab.cpp"
    break;

  case 13:
#line 218 "parser.yacc"
        {
  (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos,(yyvsp[0].boolUnit));
}
#line 1656 "y.tab.cpp"
    break;

  case 14:
#line 225 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_add,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1664 "y.tab.cpp"
    break;

  case 15:
#line 229 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_sub,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1672 "y.tab.cpp"
    break;

  case 16:
#line 233 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_mul,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1680 "y.tab.cpp"
    break;

  case 17:
#line 237 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_div,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1688 "y.tab.cpp"
    break;

  case 18:
#line 243 "parser.yacc"
            {
  (yyval.arithUExpr) = A_ArithUExpr((yyvsp[-1].pos),A_neg,(yyvsp[0].exprUnit));
}
#line 1696 "y.tab.cpp"
    break;

  case 19:
#line 249 "parser.yacc"
   {
  (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1704 "y.tab.cpp"
    break;

  case 20:
#line 253 "parser.yacc"
  {
  (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1712 "y.tab.cpp"
    break;

  case 21:
#line 257 "parser.yacc"
                        { 
  (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos),(yyvsp[-1].arithExpr)); 
}
#line 1720 "y.tab.cpp"
    break;

  case 22:
#line 261 "parser.yacc"
      {
  (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos,(yyvsp[0].fnCall));
}
#line 1728 "y.tab.cpp"
    break;

  case 23:
#line 265 "parser.yacc"
         {
  (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1736 "y.tab.cpp"
    break;

  case 24:
#line 269 "parser.yacc"
          {
  (yyval.exprUnit) = A_MemberExprUnit((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1744 "y.tab.cpp"
    break;

  case 25:
#line 273 "parser.yacc"
          {
  (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[0].arithUExpr)->pos,(yyvsp[0].arithUExpr));
}
#line 1752 "y.tab.cpp"
    break;

  case 26:
#line 280 "parser.yacc"
                             {
  (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].rightValList));
}
#line 1760 "y.tab.cpp"
    break;

  case 27:
#line 286 "parser.yacc"
   {
  (yyval.indexExpr) = A_NumIndexExpr((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1768 "y.tab.cpp"
    break;

  case 28:
#line 290 "parser.yacc"
  {
  (yyval.indexExpr) = A_IdIndexExpr((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1776 "y.tab.cpp"
    break;

  case 29:
#line 296 "parser.yacc"
                                            {
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].indexExpr));
}
#line 1784 "y.tab.cpp"
    break;

  case 30:
#line 303 "parser.yacc"
              {
  (yyval.memberExpr) = A_MemberExpr((yyvsp[-2].leftVal)->pos,(yyvsp[-2].leftVal),(yyvsp[0].tokenId)->id);
}
#line 1792 "y.tab.cpp"
    break;

  case 31:
#line 312 "parser.yacc"
       {
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[0].comExpr)->pos,(yyvsp[0].comExpr));
}
#line 1800 "y.tab.cpp"
    break;

  case 32:
#line 316 "parser.yacc"
                      {
  (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos),(yyvsp[-1].boolExpr));
}
#line 1808 "y.tab.cpp"
    break;

  case 33:
#line 320 "parser.yacc"
           {
  (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[0].boolUOpExpr)->pos,(yyvsp[0].boolUOpExpr));
}
#line 1816 "y.tab.cpp"
    break;

  case 34:
#line 327 "parser.yacc"
                    {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_or,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1824 "y.tab.cpp"
    break;

  case 35:
#line 331 "parser.yacc"
                     {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_and,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1832 "y.tab.cpp"
    break;

  case 36:
#line 339 "parser.yacc"
            {
  (yyval.boolUOpExpr) = A_BoolUOpExpr((yyvsp[-1].pos),A_not,(yyvsp[0].boolUnit));
}
#line 1840 "y.tab.cpp"
    break;

  case 37:
#line 348 "parser.yacc"
                    {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_gt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1848 "y.tab.cpp"
    break;

  case 38:
#line 352 "parser.yacc"
                    {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_le,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1856 "y.tab.cpp"
    break;

  case 39:
#line 356 "parser.yacc"
                    {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_lt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1864 "y.tab.cpp"
    break;

  case 40:
#line 360 "parser.yacc"
                    {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ge,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1872 "y.tab.cpp"
    break;

  case 41:
#line 364 "parser.yacc"
                     {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ne,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1880 "y.tab.cpp"
    break;

  case 42:
#line 368 "parser.yacc"
                    {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_eq,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1888 "y.tab.cpp"
    break;

  case 43:
#line 377 "parser.yacc"
         {
  (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1896 "y.tab.cpp"
    break;

  case 44:
#line 381 "parser.yacc"
          {
  (yyval.leftVal) = A_MemberExprLVal((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1904 "y.tab.cpp"
    break;

  case 45:
#line 385 "parser.yacc"
  {
  (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1912 "y.tab.cpp"
    break;

  case 46:
#line 393 "parser.yacc"
                                 {
 (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].rightVal));
}
#line 1920 "y.tab.cpp"
    break;

  case 47:
#line 400 "parser.yacc"
                           {
  (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal),(yyvsp[0].rightValList));
}
#line 1928 "y.tab.cpp"
    break;

  case 48:
#line 404 "parser.yacc"
        {
  (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal),NULL);
}
#line 1936 "y.tab.cpp"
    break;

  case 49:
#line 408 "parser.yacc"
{
  (yyval.rightValList) = NULL;
}
#line 1944 "y.tab.cpp"
    break;

  case 50:
#line 415 "parser.yacc"
                             {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-4].tokenId)->pos,(yyvsp[-4].tokenId)->id,(yyvsp[-2].type),(yyvsp[0].rightVal));
}
#line 1952 "y.tab.cpp"
    break;

  case 51:
#line 422 "parser.yacc"
                                                                              {
  (yyval.varDefArray) = A_VarDefArray((yyvsp[-9].tokenId)->pos,(yyvsp[-9].tokenId)->id,(yyvsp[-7].tokenNum)->num,(yyvsp[-4].type),(yyvsp[-1].rightValList));
}
#line 1960 "y.tab.cpp"
    break;

  case 52:
#line 429 "parser.yacc"
             {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].type));
}
#line 1968 "y.tab.cpp"
    break;

  case 53:
#line 436 "parser.yacc"
                                            {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-5].tokenId)->pos,(yyvsp[-5].tokenId)->id,(yyvsp[-3].tokenNum)->num,(yyvsp[0].type));
}
#line 1976 "y.tab.cpp"
    break;

  case 54:
#line 445 "parser.yacc"
                     {
  (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos),(yyvsp[-1].varDecl));
}
#line 1984 "y.tab.cpp"
    break;

  case 55:
#line 449 "parser.yacc"
                    {
  (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos),(yyvsp[-1].varDef));
}
#line 1992 "y.tab.cpp"
    break;

  case 56:
#line 457 "parser.yacc"
                         {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl),(yyvsp[0].varDeclList));
}
#line 2000 "y.tab.cpp"
    break;

  case 57:
#line 461 "parser.yacc"
       {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl),NULL);
}
#line 2008 "y.tab.cpp"
    break;

  case 58:
#line 465 "parser.yacc"
{
  (yyval.varDeclList) = NULL;
}
#line 2016 "y.tab.cpp"
    break;

  case 59:
#line 473 "parser.yacc"
                                   {
  (yyval.structDef) = A_StructDef((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].varDeclList));
}
#line 2024 "y.tab.cpp"
    break;

  case 60:
#line 480 "parser.yacc"
           {
  (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
}
#line 2032 "y.tab.cpp"
    break;

  case 61:
#line 488 "parser.yacc"
                             {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].paramDecl),NULL);
}
#line 2040 "y.tab.cpp"
    break;

  case 62:
#line 492 "parser.yacc"
                                        {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos),(yyvsp[-5].tokenId)->id,(yyvsp[-3].paramDecl),(yyvsp[0].type));
}
#line 2048 "y.tab.cpp"
    break;

  case 63:
#line 499 "parser.yacc"
                                      {
  (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos,(yyvsp[-3].fnDecl),(yyvsp[-1].codeBlockStmtList));
}
#line 2056 "y.tab.cpp"
    break;

  case 64:
#line 508 "parser.yacc"
           {
  (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos,(yyvsp[0].varDeclStmt));
}
#line 2064 "y.tab.cpp"
    break;

  case 65:
#line 512 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos,(yyvsp[0].assignStmt));
}
#line 2072 "y.tab.cpp"
    break;

  case 66:
#line 516 "parser.yacc"
        {
  (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos,(yyvsp[0].callStmt));
}
#line 2080 "y.tab.cpp"
    break;

  case 67:
#line 520 "parser.yacc"
      {
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos,(yyvsp[0].ifStmt));
}
#line 2088 "y.tab.cpp"
    break;

  case 68:
#line 524 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos,(yyvsp[0].whileStmt));
}
#line 2096 "y.tab.cpp"
    break;

  case 69:
#line 528 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos,(yyvsp[0].returnStmt));
}
#line 2104 "y.tab.cpp"
    break;

  case 70:
#line 532 "parser.yacc"
              {
  (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
}
#line 2112 "y.tab.cpp"
    break;

  case 71:
#line 536 "parser.yacc"
               {
  (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
}
#line 2120 "y.tab.cpp"
    break;

  case 72:
#line 540 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
}
#line 2128 "y.tab.cpp"
    break;

  case 73:
#line 547 "parser.yacc"
                                                         {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList),NULL);
}
#line 2136 "y.tab.cpp"
    break;

  case 74:
#line 551 "parser.yacc"
                                                                                              {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-10].pos),(yyvsp[-8].boolExpr),(yyvsp[-5].codeBlockStmtList),(yyvsp[-1].codeBlockStmtList));
}
#line 2144 "y.tab.cpp"
    break;

  case 75:
#line 559 "parser.yacc"
                                                            {
  (yyval.whileStmt) = A_WhileStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList));
}
#line 2152 "y.tab.cpp"
    break;

  case 76:
#line 565 "parser.yacc"
                {
  (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos,(yyvsp[-1].fnDecl));
}
#line 2160 "y.tab.cpp"
    break;

  case 77:
#line 572 "parser.yacc"
                {
  (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos,(yyvsp[-1].fnCall));
}
#line 2168 "y.tab.cpp"
    break;

  case 78:
#line 579 "parser.yacc"
                         {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos),(yyvsp[-1].rightVal));
}
#line 2176 "y.tab.cpp"
    break;

  case 79:
#line 582 "parser.yacc"
                  {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos),NULL);
}
#line 2184 "y.tab.cpp"
    break;

  case 80:
#line 591 "parser.yacc"
{
  (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 2192 "y.tab.cpp"
    break;

  case 81:
#line 595 "parser.yacc"
{
  (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
}
#line 2200 "y.tab.cpp"
    break;

  case 82:
#line 599 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
}
#line 2208 "y.tab.cpp"
    break;

  case 83:
#line 603 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
}
#line 2216 "y.tab.cpp"
    break;

  case 84:
#line 607 "parser.yacc"
{
  (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
}
#line 2224 "y.tab.cpp"
    break;

  case 85:
#line 614 "parser.yacc"
                               {
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt),(yyvsp[0].codeBlockStmtList));
}
#line 2232 "y.tab.cpp"
    break;

  case 86:
#line 618 "parser.yacc"
{
  (yyval.codeBlockStmtList) = NULL;
}
#line 2240 "y.tab.cpp"
    break;

  case 87:
#line 624 "parser.yacc"
                                 {
  (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement),(yyvsp[0].programElementList));
}
#line 2248 "y.tab.cpp"
    break;

  case 88:
#line 628 "parser.yacc"
{
  (yyval.programElementList) = NULL;
}
#line 2256 "y.tab.cpp"
    break;

  case 89:
#line 634 "parser.yacc"
{  
  root = A_Program((yyvsp[0].programElementList));
  (yyval.program) = A_Program((yyvsp[0].programElementList));
}
#line 2265 "y.tab.cpp"
    break;


#line 2269 "y.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 640 "parser.yacc"




extern "C"{
void yyerror(char * s)
{
  fprintf(stderr, "%s\n",s);
}
int yywrap()
{
  return(1);
}
}


