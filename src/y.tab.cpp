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

// extern int yydebug=1;

extern int yylex(void);
extern "C"{
extern void yyerror(char *s); 
extern int  yywrap();
}


#line 87 "y.tab.cpp"

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
    LEFT_PARENT = 263,
    RIGHT_PARENT = 264,
    LEFT_SQUARE_BRACKET = 265,
    RIGHT_SQUARE_BRACKET = 266,
    LEFT_BRACE = 267,
    RIGHT_BRACE = 268,
    GREATER = 269,
    NOT_LESS_THEN = 270,
    LESS = 271,
    NOT_GREATER_THEN = 272,
    EQUAL = 273,
    NOT_EQUAL = 274,
    ASSIGN = 275,
    COMMA = 276,
    COLON = 277,
    LET = 278,
    POINT = 279,
    RETURN = 280,
    AND = 281,
    OR = 282,
    NOT = 283,
    FN = 284,
    IF = 285,
    ELSE = 286,
    WHILE = 287,
    BREAK = 288,
    CONTINUE = 289,
    RIGHT_ARROW = 290,
    INT = 291,
    STRUCT = 292,
    Id = 293,
    Num = 294
  };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define SEMICOLON 262
#define LEFT_PARENT 263
#define RIGHT_PARENT 264
#define LEFT_SQUARE_BRACKET 265
#define RIGHT_SQUARE_BRACKET 266
#define LEFT_BRACE 267
#define RIGHT_BRACE 268
#define GREATER 269
#define NOT_LESS_THEN 270
#define LESS 271
#define NOT_GREATER_THEN 272
#define EQUAL 273
#define NOT_EQUAL 274
#define ASSIGN 275
#define COMMA 276
#define COLON 277
#define LET 278
#define POINT 279
#define RETURN 280
#define AND 281
#define OR 282
#define NOT 283
#define FN 284
#define IF 285
#define ELSE 286
#define WHILE 287
#define BREAK 288
#define CONTINUE 289
#define RIGHT_ARROW 290
#define INT 291
#define STRUCT 292
#define Id 293
#define Num 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.yacc"

  A_pos pos;
  A_type type;
  A_varDecl varDecl;
  A_varDef varDef;
  A_rightVal rightVal;
  A_arithExpr arithExpr;
  A_boolExpr boolExpr;
  A_arithBiOpExpr arithBiOpExpr;
  A_arithUExpr arithUExpr;
  A_exprUnit exprUnit;
  A_fnCall fnCall;
  A_indexExpr indexExpr;
  A_arrayExpr arrayExpr;
  A_memberExpr memberExpr;
  A_boolUnit boolUnit;
  A_boolBiOpExpr boolBiOpExpr;
  A_boolUOpExpr boolUOpExpr;
  A_comExpr comExpr;
  A_leftVal leftVal;
  A_assignStmt assignStmt;
  A_rightValList rightValList;
  A_varDefScalar varDefScalar;
  A_varDefArray varDefArray;
  A_varDeclScalar varDeclScalar;
  A_varDeclArray varDeclArray;
  A_varDeclStmt varDeclStmt;
  A_varDeclList varDeclList;
  A_structDef structDef;
  A_paramDecl paramDecl;
  A_fnDecl fnDecl;
  A_fnDef fnDef;
  A_codeBlockStmt codeBlockStmt;
  A_ifStmt ifStmt;
  A_whileStmt whileStmt;
  A_fnDeclStmt fnDeclStmt;
  A_callStmt callStmt;
  A_returnStmt returnStmt;
  A_programElement programElement;
  A_codeBlockStmtList codeBlockStmtList;
  A_programElementList programElementList;
  A_program program;
  A_tokenId tokenId;
  A_tokenNum tokenNum;

#line 263 "y.tab.cpp"

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
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

#define YYUNDEFTOK  2
#define YYMAXUTOK   294


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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   151,   151,   155,   163,   167,   179,   183,   191,   195,
     203,   207,   215,   219,   226,   230,   234,   238,   245,   258,
     262,   266,   270,   274,   278,   282,   289,   297,   301,   308,
     315,   325,   329,   333,   340,   344,   351,   358,   362,   366,
     370,   374,   378,   387,   391,   395,   403,   410,   414,   418,
     425,   429,   436,   443,   447,   454,   458,   470,   474,   482,
     486,   490,   498,   505,   513,   517,   524,   539,   543,   547,
     551,   555,   559,   563,   567,   571,   578,   582,   590,   597,
     604,   611,   614,   626,   630,   634,   638,   642,   651,   655,
     662,   666,   673
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "MUL", "DIV", "SEMICOLON",
  "LEFT_PARENT", "RIGHT_PARENT", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_BRACE", "RIGHT_BRACE", "GREATER",
  "NOT_LESS_THEN", "LESS", "NOT_GREATER_THEN", "EQUAL", "NOT_EQUAL",
  "ASSIGN", "COMMA", "COLON", "LET", "POINT", "RETURN", "AND", "OR", "NOT",
  "FN", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RIGHT_ARROW", "INT",
  "STRUCT", "Id", "Num", "$accept", "Type", "VarDecl", "VarDef",
  "RightVal", "ArithExpr", "BoolExpr", "ArithBiOpExpr", "ArithUExpr",
  "ExprUnit", "FnCall", "IndexExpr", "ArrayExpr", "MemberExpr", "BoolUnit",
  "BoolBiOpExpr", "BoolUOpExpr", "ComExpr", "LeftVal", "AssignStmt",
  "RightValList", "VarDefScalar", "VarDefArray", "VarDeclScalar",
  "VarDeclArray", "VarDeclStmt", "VarDeclList", "StructDef", "ParamDecl",
  "FnDecl", "FnDef", "CodeBlockStmt", "IfStmt", "WhileStmt", "FnDeclStmt",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF (-138)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -138,   -29,   -18,     1,  -138,  -138,   118,  -138,  -138,
       8,  -138,    13,   106,    10,    37,  -138,  -138,  -138,  -138,
      43,    42,  -138,    72,  -138,  -138,    41,    53,    60,  -138,
    -138,    45,    45,  -138,     4,    81,   109,   122,   143,   144,
     147,  -138,  -138,    83,  -138,  -138,    72,  -138,  -138,  -138,
    -138,   148,   149,    14,    53,    53,    16,  -138,  -138,   128,
     130,  -138,  -138,   129,  -138,    91,    98,  -138,  -138,  -138,
    -138,    99,  -138,  -138,   142,    25,   145,  -138,   154,   151,
    -138,   158,    53,    53,  -138,  -138,    53,  -138,    24,    53,
     131,  -138,  -138,   146,    14,  -138,   115,    32,   129,  -138,
      14,    14,    14,    14,    53,    53,    14,    14,    14,    14,
      14,    14,    53,   132,    60,    45,   135,  -138,  -138,    73,
      85,   152,   163,  -138,  -138,   156,   167,  -138,    60,  -138,
    -138,  -138,   153,   153,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,   164,  -138,  -138,    60,   165,
     166,    53,  -138,  -138,  -138,   159,   160,  -138,    72,    72,
    -138,   168,    60,   170,   171,    53,  -138,   150,  -138,   172,
     174,  -138,    72,   175,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      91,    87,     0,     0,     0,    83,    84,     0,    86,    85,
      91,    92,     0,    54,     0,     0,     6,     7,     4,     5,
       0,     0,    79,    89,    90,     1,     0,     0,     0,    57,
      58,    61,    61,    75,     0,     0,     0,     0,     0,    45,
       0,    43,    44,     0,    68,    67,    89,    70,    71,    69,
      72,     0,     0,     0,     0,     0,    20,    19,    51,     8,
       9,    10,    25,    11,    22,    23,    24,    13,    12,    33,
      31,     0,     2,     3,    53,    54,    60,    63,     0,     0,
      82,     0,     0,     0,    74,    73,    49,    80,     0,     0,
       0,    88,    66,    56,     0,    18,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    64,    62,    81,     0,
       0,    48,     0,    28,    27,     0,     0,    30,     0,    11,
      21,    32,    14,    15,    16,    17,    35,    34,    37,    40,
      39,    38,    42,    41,    50,     0,    53,    59,     0,     0,
       0,    49,    26,    29,    46,    55,    56,    65,    89,    89,
      47,     0,     0,     0,     0,    49,    55,    76,    78,     0,
       0,    52,    89,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   -98,   185,  -138,   -24,   -16,   -49,  -138,  -138,   -34,
     -23,  -138,   -21,   -19,   121,  -138,  -138,  -138,   -17,  -138,
    -137,  -138,  -138,  -138,  -138,    36,   -25,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   -45,   179,
    -138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    74,    76,    15,   121,    59,    60,    61,    62,    63,
      64,   125,    65,    66,    67,    68,    69,    70,    71,    44,
     122,    16,    17,    18,    19,    45,    77,     6,    78,     7,
       8,    46,    47,    48,     9,    49,    50,    10,    51,    11,
      12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    91,    41,    58,    42,    97,    43,    79,    53,    13,
      81,    80,    54,    25,   160,     1,   146,    29,    53,    95,
      20,    98,    94,    40,    86,    41,   -45,    42,   169,    43,
     155,     2,    55,   119,   120,   113,     5,     3,    96,    21,
     -45,   131,    56,    57,    30,     4,     5,   114,    98,    98,
     157,    31,    56,    57,    32,   136,   137,    53,   104,   105,
     129,    54,   123,   124,   166,   126,   129,   129,   129,   129,
      98,    98,   138,   139,   140,   141,   142,   143,    96,    33,
      52,    55,   149,    75,   132,   133,   134,   135,   144,    82,
     147,    56,    57,    88,   150,     2,    72,    34,    73,   104,
     105,   -43,    35,    89,    36,    37,    38,    90,   -44,    88,
      39,   104,   105,   163,   164,   -43,    26,    83,   100,   101,
     102,   103,   -44,    90,   130,    22,    27,   173,    28,    84,
      23,   100,   101,   102,   103,    40,    40,    41,    41,    42,
      42,    43,    43,   106,   107,   108,   109,   110,   111,    40,
      85,    41,    86,    42,    87,    43,   104,   105,   102,   103,
      93,    92,   112,   116,   117,   118,   115,   153,   128,   127,
     148,   145,   152,   151,   154,   156,    99,   158,   159,   161,
     165,   170,   162,   167,   168,   171,   172,    14,   174,    24
};

static const yytype_uint8 yycheck[] =
{
      23,    46,    23,    27,    23,    54,    23,    32,     4,    38,
      34,     7,     8,     0,   151,     7,   114,     7,     4,    53,
      38,    55,     8,    46,     8,    46,    10,    46,   165,    46,
     128,    23,    28,    82,    83,    10,     0,    29,    54,    38,
      24,     9,    38,    39,     7,    37,    10,    22,    82,    83,
     148,     8,    38,    39,    12,   104,   105,     4,    26,    27,
      94,     8,    38,    39,   162,    89,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    94,     7,
      39,    28,     9,    38,   100,   101,   102,   103,   112,     8,
     115,    38,    39,    10,     9,    23,    36,    25,    38,    26,
      27,    10,    30,    20,    32,    33,    34,    24,    10,    10,
      38,    26,    27,   158,   159,    24,    10,     8,     3,     4,
       5,     6,    24,    24,     9,     7,    20,   172,    22,     7,
      12,     3,     4,     5,     6,   158,   159,   158,   159,   158,
     159,   158,   159,    14,    15,    16,    17,    18,    19,   172,
       7,   172,     8,   172,     7,   172,    26,    27,     5,     6,
      11,    13,    20,     9,    13,     7,    21,    11,    22,    38,
      35,    39,     9,    21,     7,    11,    55,    12,    12,    20,
      12,    31,    22,    13,    13,    13,    12,     2,    13,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    23,    29,    37,    65,    67,    69,    70,    74,
      77,    79,    80,    38,    42,    43,    61,    62,    63,    64,
      38,    38,     7,    12,    79,     0,    10,    20,    22,     7,
       7,     8,    12,     7,    25,    30,    32,    33,    34,    38,
      50,    52,    53,    58,    59,    65,    71,    72,    73,    75,
      76,    78,    39,     4,     8,    28,    38,    39,    44,    45,
      46,    47,    48,    49,    50,    52,    53,    54,    55,    56,
      57,    58,    36,    38,    41,    38,    42,    66,    68,    66,
       7,    44,     8,     8,     7,     7,     8,     7,    10,    20,
      24,    78,    13,    11,     8,    49,    45,    46,    49,    54,
       3,     4,     5,     6,    26,    27,    14,    15,    16,    17,
      18,    19,    20,    10,    22,    21,     9,    13,     7,    46,
      46,    44,    60,    38,    39,    51,    44,    38,    22,    49,
       9,     9,    45,    45,    45,    45,    46,    46,    49,    49,
      49,    49,    49,    49,    44,    39,    41,    66,    35,     9,
       9,    21,     9,    11,     7,    41,    11,    41,    12,    12,
      60,    20,    22,    78,    78,    12,    41,    13,    13,    60,
      31,    13,    12,    78,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    47,    47,    48,    49,
      49,    49,    49,    49,    49,    49,    50,    51,    51,    52,
      53,    54,    54,    54,    55,    55,    56,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    59,    60,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    67,    68,    69,    69,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    74,
      75,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     4,     1,     1,     4,
       3,     1,     3,     1,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     3,     1,     0,
       5,     3,    10,     3,     1,     6,     4,     3,     3,     3,
       1,     0,     5,     1,     5,     7,     4,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     7,    11,     7,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     2,     0,
       2,     0,     1
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
#line 151 "parser.yacc"
   {
  (yyval.type) = A_NativeType((yyvsp[0].pos),A_intTypeKind);
}
#line 1569 "y.tab.cpp"
    break;

  case 3:
#line 155 "parser.yacc"
  {
  (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1577 "y.tab.cpp"
    break;

  case 4:
#line 163 "parser.yacc"
             {
  (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].varDeclScalar)->pos,(yyvsp[0].varDeclScalar));
}
#line 1585 "y.tab.cpp"
    break;

  case 5:
#line 167 "parser.yacc"
            {
  (yyval.varDecl) = A_VarDecl_Array((yyvsp[0].varDeclArray)->pos,(yyvsp[0].varDeclArray));
}
#line 1593 "y.tab.cpp"
    break;

  case 6:
#line 179 "parser.yacc"
            {
  (yyval.varDef) = A_VarDef_Scalar((yyvsp[0].varDefScalar)->pos,(yyvsp[0].varDefScalar));
}
#line 1601 "y.tab.cpp"
    break;

  case 7:
#line 183 "parser.yacc"
           {
  (yyval.varDef) = A_VarDef_Array((yyvsp[0].varDefArray)->pos,(yyvsp[0].varDefArray));
}
#line 1609 "y.tab.cpp"
    break;

  case 8:
#line 191 "parser.yacc"
         {
  (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos,(yyvsp[0].arithExpr));
}
#line 1617 "y.tab.cpp"
    break;

  case 9:
#line 195 "parser.yacc"
        {
  (yyval.rightVal) = A_BoolExprRVal((yyvsp[0].boolExpr)->pos,(yyvsp[0].boolExpr));
}
#line 1625 "y.tab.cpp"
    break;

  case 10:
#line 203 "parser.yacc"
             {
  (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[0].arithBiOpExpr)->pos,(yyvsp[0].arithBiOpExpr));
}
#line 1633 "y.tab.cpp"
    break;

  case 11:
#line 207 "parser.yacc"
        {
  (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos,(yyvsp[0].exprUnit));
}
#line 1641 "y.tab.cpp"
    break;

  case 12:
#line 215 "parser.yacc"
            {
  (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[0].boolBiOpExpr)->pos,(yyvsp[0].boolBiOpExpr));
}
#line 1649 "y.tab.cpp"
    break;

  case 13:
#line 219 "parser.yacc"
        {
  (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos,(yyvsp[0].boolUnit));
}
#line 1657 "y.tab.cpp"
    break;

  case 14:
#line 226 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_add,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1665 "y.tab.cpp"
    break;

  case 15:
#line 230 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_sub,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1673 "y.tab.cpp"
    break;

  case 16:
#line 234 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_mul,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1681 "y.tab.cpp"
    break;

  case 17:
#line 238 "parser.yacc"
                       {
  (yyval.arithBiOpExpr) = A_ArithBiOpExpr((yyvsp[-2].arithExpr)->pos,A_div,(yyvsp[-2].arithExpr),(yyvsp[0].arithExpr));
}
#line 1689 "y.tab.cpp"
    break;

  case 18:
#line 245 "parser.yacc"
            {
  (yyval.arithUExpr) = A_ArithUExpr((yyvsp[-1].pos),A_neg,(yyvsp[0].exprUnit));
}
#line 1697 "y.tab.cpp"
    break;

  case 19:
#line 258 "parser.yacc"
   {
  (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1705 "y.tab.cpp"
    break;

  case 20:
#line 262 "parser.yacc"
  {
  (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1713 "y.tab.cpp"
    break;

  case 21:
#line 266 "parser.yacc"
                                   { 
  (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos),(yyvsp[-1].arithExpr)); //括号是Apos类型
}
#line 1721 "y.tab.cpp"
    break;

  case 22:
#line 270 "parser.yacc"
      {
  (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos,(yyvsp[0].fnCall));
}
#line 1729 "y.tab.cpp"
    break;

  case 23:
#line 274 "parser.yacc"
         {
  (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1737 "y.tab.cpp"
    break;

  case 24:
#line 278 "parser.yacc"
          {
  (yyval.exprUnit) = A_MemberExprUnit((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1745 "y.tab.cpp"
    break;

  case 25:
#line 282 "parser.yacc"
          {
  (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[0].arithUExpr)->pos,(yyvsp[0].arithUExpr));
}
#line 1753 "y.tab.cpp"
    break;

  case 26:
#line 289 "parser.yacc"
                                        {
  (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].rightValList));
}
#line 1761 "y.tab.cpp"
    break;

  case 27:
#line 297 "parser.yacc"
   {
  (yyval.indexExpr) = A_NumIndexExpr((yyvsp[0].tokenNum)->pos,(yyvsp[0].tokenNum)->num);
}
#line 1769 "y.tab.cpp"
    break;

  case 28:
#line 301 "parser.yacc"
  {
  (yyval.indexExpr) = A_IdIndexExpr((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1777 "y.tab.cpp"
    break;

  case 29:
#line 308 "parser.yacc"
                                                          {
  (yyval.arrayExpr) = A_ArrayExpr((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].indexExpr));
}
#line 1785 "y.tab.cpp"
    break;

  case 30:
#line 315 "parser.yacc"
                {
  (yyval.memberExpr) = A_MemberExpr((yyvsp[-2].leftVal)->pos,(yyvsp[-2].leftVal),(yyvsp[0].tokenId)->id);
}
#line 1793 "y.tab.cpp"
    break;

  case 31:
#line 325 "parser.yacc"
       {
  (yyval.boolUnit) = A_ComExprUnit((yyvsp[0].comExpr)->pos,(yyvsp[0].comExpr));
}
#line 1801 "y.tab.cpp"
    break;

  case 32:
#line 329 "parser.yacc"
                                 {
  (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos),(yyvsp[-1].boolExpr));
}
#line 1809 "y.tab.cpp"
    break;

  case 33:
#line 333 "parser.yacc"
           {
  (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[0].boolUOpExpr)->pos,(yyvsp[0].boolUOpExpr));
}
#line 1817 "y.tab.cpp"
    break;

  case 34:
#line 340 "parser.yacc"
                    {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_or,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1825 "y.tab.cpp"
    break;

  case 35:
#line 344 "parser.yacc"
                     {
  (yyval.boolBiOpExpr) = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos,A_and,(yyvsp[-2].boolExpr),(yyvsp[0].boolExpr));
}
#line 1833 "y.tab.cpp"
    break;

  case 36:
#line 351 "parser.yacc"
            {
  (yyval.boolUOpExpr) = A_BoolUOpExpr((yyvsp[-1].pos),A_not,(yyvsp[0].boolUnit));
}
#line 1841 "y.tab.cpp"
    break;

  case 37:
#line 358 "parser.yacc"
                         {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_gt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1849 "y.tab.cpp"
    break;

  case 38:
#line 362 "parser.yacc"
                                  {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_le,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1857 "y.tab.cpp"
    break;

  case 39:
#line 366 "parser.yacc"
                      {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_lt,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1865 "y.tab.cpp"
    break;

  case 40:
#line 370 "parser.yacc"
                               {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ge,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1873 "y.tab.cpp"
    break;

  case 41:
#line 374 "parser.yacc"
                           {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_ne,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1881 "y.tab.cpp"
    break;

  case 42:
#line 378 "parser.yacc"
                       {
  (yyval.comExpr) = A_ComExpr((yyvsp[-2].exprUnit)->pos,A_eq,(yyvsp[-2].exprUnit),(yyvsp[0].exprUnit));
}
#line 1889 "y.tab.cpp"
    break;

  case 43:
#line 387 "parser.yacc"
         {
  (yyval.leftVal) = A_ArrExprLVal((yyvsp[0].arrayExpr)->pos,(yyvsp[0].arrayExpr));
}
#line 1897 "y.tab.cpp"
    break;

  case 44:
#line 391 "parser.yacc"
          {
  (yyval.leftVal) = A_MemberExprLVal((yyvsp[0].memberExpr)->pos,(yyvsp[0].memberExpr));
}
#line 1905 "y.tab.cpp"
    break;

  case 45:
#line 395 "parser.yacc"
  {
  (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id);
}
#line 1913 "y.tab.cpp"
    break;

  case 46:
#line 403 "parser.yacc"
                                 {
 (yyval.assignStmt) = A_AssignStmt((yyvsp[-3].leftVal)->pos,(yyvsp[-3].leftVal),(yyvsp[-1].rightVal));
}
#line 1921 "y.tab.cpp"
    break;

  case 47:
#line 410 "parser.yacc"
                           {
  (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal),(yyvsp[0].rightValList));
}
#line 1929 "y.tab.cpp"
    break;

  case 48:
#line 414 "parser.yacc"
        {
  (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal),NULL);
}
#line 1937 "y.tab.cpp"
    break;

  case 49:
#line 418 "parser.yacc"
{
  (yyval.rightValList) = NULL;
}
#line 1945 "y.tab.cpp"
    break;

  case 50:
#line 425 "parser.yacc"
                             {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-4].tokenId)->pos,(yyvsp[-4].tokenId)->id,(yyvsp[-2].type),(yyvsp[0].rightVal));
}
#line 1953 "y.tab.cpp"
    break;

  case 51:
#line 429 "parser.yacc"
                  {
  (yyval.varDefScalar) = A_VarDefScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,NULL,(yyvsp[0].rightVal));
}
#line 1961 "y.tab.cpp"
    break;

  case 52:
#line 436 "parser.yacc"
                                                                                                     {
  (yyval.varDefArray) = A_VarDefArray((yyvsp[-9].tokenId)->pos,(yyvsp[-9].tokenId)->id,(yyvsp[-7].tokenNum)->num,(yyvsp[-4].type),(yyvsp[-1].rightValList));
}
#line 1969 "y.tab.cpp"
    break;

  case 53:
#line 443 "parser.yacc"
             {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[-2].tokenId)->pos,(yyvsp[-2].tokenId)->id,(yyvsp[0].type));
}
#line 1977 "y.tab.cpp"
    break;

  case 54:
#line 447 "parser.yacc"
   {
  (yyval.varDeclScalar) = A_VarDeclScalar((yyvsp[0].tokenId)->pos,(yyvsp[0].tokenId)->id,NULL);
}
#line 1985 "y.tab.cpp"
    break;

  case 55:
#line 454 "parser.yacc"
                                                          {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-5].tokenId)->pos,(yyvsp[-5].tokenId)->id,(yyvsp[-3].tokenNum)->num,(yyvsp[0].type));
}
#line 1993 "y.tab.cpp"
    break;

  case 56:
#line 458 "parser.yacc"
                                               {
  (yyval.varDeclArray) = A_VarDeclArray((yyvsp[-3].tokenId)->pos,(yyvsp[-3].tokenId)->id,(yyvsp[-1].tokenNum)->num,NULL);
}
#line 2001 "y.tab.cpp"
    break;

  case 57:
#line 470 "parser.yacc"
                     {
  (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos),(yyvsp[-1].varDecl));
}
#line 2009 "y.tab.cpp"
    break;

  case 58:
#line 474 "parser.yacc"
                    {
  (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos),(yyvsp[-1].varDef));
}
#line 2017 "y.tab.cpp"
    break;

  case 59:
#line 482 "parser.yacc"
                         {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl),(yyvsp[0].varDeclList));
}
#line 2025 "y.tab.cpp"
    break;

  case 60:
#line 486 "parser.yacc"
       {
  (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl),NULL);
}
#line 2033 "y.tab.cpp"
    break;

  case 61:
#line 490 "parser.yacc"
{
  (yyval.varDeclList) = NULL;
}
#line 2041 "y.tab.cpp"
    break;

  case 62:
#line 498 "parser.yacc"
                                            {
  (yyval.structDef) = A_StructDef((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].varDeclList));
}
#line 2049 "y.tab.cpp"
    break;

  case 63:
#line 505 "parser.yacc"
           {
  (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
}
#line 2057 "y.tab.cpp"
    break;

  case 64:
#line 513 "parser.yacc"
                                        {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos),(yyvsp[-3].tokenId)->id,(yyvsp[-1].paramDecl),NULL);
}
#line 2065 "y.tab.cpp"
    break;

  case 65:
#line 517 "parser.yacc"
                                                         {
  (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos),(yyvsp[-5].tokenId)->id,(yyvsp[-3].paramDecl),(yyvsp[0].type));
}
#line 2073 "y.tab.cpp"
    break;

  case 66:
#line 524 "parser.yacc"
                                               {
  (yyval.fnDef) = A_FnDef((yyvsp[-3].fnDecl)->pos,(yyvsp[-3].fnDecl),(yyvsp[-1].codeBlockStmtList));
}
#line 2081 "y.tab.cpp"
    break;

  case 67:
#line 539 "parser.yacc"
           {
  (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos,(yyvsp[0].varDeclStmt));
}
#line 2089 "y.tab.cpp"
    break;

  case 68:
#line 543 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos,(yyvsp[0].assignStmt));
}
#line 2097 "y.tab.cpp"
    break;

  case 69:
#line 547 "parser.yacc"
        {
  (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos,(yyvsp[0].callStmt));
}
#line 2105 "y.tab.cpp"
    break;

  case 70:
#line 551 "parser.yacc"
      {
  (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos,(yyvsp[0].ifStmt));
}
#line 2113 "y.tab.cpp"
    break;

  case 71:
#line 555 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos,(yyvsp[0].whileStmt));
}
#line 2121 "y.tab.cpp"
    break;

  case 72:
#line 559 "parser.yacc"
          {
  (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos,(yyvsp[0].returnStmt));
}
#line 2129 "y.tab.cpp"
    break;

  case 73:
#line 563 "parser.yacc"
                  {
  (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
}
#line 2137 "y.tab.cpp"
    break;

  case 74:
#line 567 "parser.yacc"
               {
  (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
}
#line 2145 "y.tab.cpp"
    break;

  case 75:
#line 571 "parser.yacc"
         {
  (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
}
#line 2153 "y.tab.cpp"
    break;

  case 76:
#line 578 "parser.yacc"
                                                                             {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList),NULL);
}
#line 2161 "y.tab.cpp"
    break;

  case 77:
#line 582 "parser.yacc"
                                                                                                                           {
  (yyval.ifStmt) = A_IfStmt((yyvsp[-10].pos),(yyvsp[-8].boolExpr),(yyvsp[-5].codeBlockStmtList),(yyvsp[-1].codeBlockStmtList));
}
#line 2169 "y.tab.cpp"
    break;

  case 78:
#line 590 "parser.yacc"
                                                                                {
  (yyval.whileStmt) = A_WhileStmt((yyvsp[-6].pos),(yyvsp[-4].boolExpr),(yyvsp[-1].codeBlockStmtList));
}
#line 2177 "y.tab.cpp"
    break;

  case 79:
#line 597 "parser.yacc"
                {
  (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos,(yyvsp[-1].fnDecl));
}
#line 2185 "y.tab.cpp"
    break;

  case 80:
#line 604 "parser.yacc"
                {
  (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos,(yyvsp[-1].fnCall));
}
#line 2193 "y.tab.cpp"
    break;

  case 81:
#line 611 "parser.yacc"
                         {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos),(yyvsp[-1].rightVal));
}
#line 2201 "y.tab.cpp"
    break;

  case 82:
#line 614 "parser.yacc"
                  {
  (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos),NULL);
}
#line 2209 "y.tab.cpp"
    break;

  case 83:
#line 627 "parser.yacc"
{
  (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
}
#line 2217 "y.tab.cpp"
    break;

  case 84:
#line 631 "parser.yacc"
{
  (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
}
#line 2225 "y.tab.cpp"
    break;

  case 85:
#line 635 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
}
#line 2233 "y.tab.cpp"
    break;

  case 86:
#line 639 "parser.yacc"
{
  (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
}
#line 2241 "y.tab.cpp"
    break;

  case 87:
#line 643 "parser.yacc"
{
  (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
}
#line 2249 "y.tab.cpp"
    break;

  case 88:
#line 651 "parser.yacc"
                               {
  (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt),(yyvsp[0].codeBlockStmtList));
}
#line 2257 "y.tab.cpp"
    break;

  case 89:
#line 655 "parser.yacc"
{
  (yyval.codeBlockStmtList) = NULL;
}
#line 2265 "y.tab.cpp"
    break;

  case 90:
#line 662 "parser.yacc"
                                 {
  (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement),(yyvsp[0].programElementList));
}
#line 2273 "y.tab.cpp"
    break;

  case 91:
#line 666 "parser.yacc"
{
  (yyval.programElementList) = NULL;
}
#line 2281 "y.tab.cpp"
    break;

  case 92:
#line 674 "parser.yacc"
{  
  root = A_Program((yyvsp[0].programElementList));
  (yyval.program) = A_Program((yyvsp[0].programElementList));
}
#line 2290 "y.tab.cpp"
    break;


#line 2294 "y.tab.cpp"

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
#line 680 "parser.yacc"


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
