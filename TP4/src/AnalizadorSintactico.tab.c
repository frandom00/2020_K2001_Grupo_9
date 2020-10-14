
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "AnalizadorSintactico.y"

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define YYDEBUG 1

int flag_error = 0; 

char* nombre;
char* tipodato;

extern FILE* yyin;
FILE* yyout;



int yylex();

int yywrap()
{
    return(1);
}

void yyerror (char *smth) {
   fprintf (yyout,"error sintactico = %s\n", smth);
}



/* Line 189 of yacc.c  */
#line 104 "AnalizadorSintactico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMERO_ENTERO = 258,
     NUMERO_REAL = 259,
     IDENTIFICADOR = 260,
     LITERALCADENA = 261,
     CARACTER = 262,
     ERRORLEXICO = 263,
     P_INC = 264,
     P_DEC = 265,
     DISTINTO = 266,
     IGUAL = 267,
     AND = 268,
     OR = 269,
     DIV_IGUAL = 270,
     POR_IGUAL = 271,
     MENOS_IGUAL = 272,
     MAS_IGUAL = 273,
     MENOR_IGUAL = 274,
     MAYOR_IGUAL = 275,
     MOD_IGUAL = 276,
     BIT_SHIFT_L = 277,
     BIT_SHIFT_R = 278,
     FLECHITA = 279,
     DO = 280,
     WHILE = 281,
     IF = 282,
     ELSE = 283,
     FOR = 284,
     RETURN = 285,
     GOTO = 286,
     STATIC = 287,
     EXTERN = 288,
     CONST = 289,
     VOLATILE = 290,
     STRUCT = 291,
     UNION = 292,
     TYPEDEF = 293,
     AUTO = 294,
     REGISTER = 295,
     CHAR = 296,
     INT = 297,
     FLOAT = 298,
     LONG = 299,
     SHORT = 300,
     SIGNED = 301,
     UNSIGNED = 302,
     VOID = 303,
     ENUM = 304,
     DOUBLE = 305,
     SIZEOF = 306,
     SWITCH = 307,
     CASE = 308,
     BREAK = 309,
     DEFAULT = 310,
     CONTINUE = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 91 "AnalizadorSintactico.y"

    int entero;
    char* texto;
    char caracter;
    float real;



/* Line 214 of yacc.c  */
#line 205 "AnalizadorSintactico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "AnalizadorSintactico.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNRULES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,     2,     2,    67,    70,     2,
      68,    69,    66,    63,    76,    64,    75,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    58,
      62,    59,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     2,    78,    72,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    23,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    50,    52,    56,    57,    58,    60,    62,    66,
      68,    72,    76,    78,    82,    86,    90,    94,    96,   100,
     104,   106,   110,   114,   118,   120,   125,   127,   130,   133,
     136,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   162,   167,   171,   175,   178,   181,   183,   187,   189,
     191,   193,   195,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     235,   237,   239,   241,   243,   245,   247,   249,   251,   254,
     256,   262,   267,   272,   276,   278,   279,   281,   282,   284,
     285,   287,   290,   292,   294,   297,   299,   305,   313,   319,
     322,   325,   331,   338,   348,   351,   354,   357,   362,   366,
     370,   373,   376,   378,   382,   385,   388,   392,   395,   398,
     401,   404,   405,   407,   412,   414,   416,   420,   422,   424,
     428,   431,   432,   435,   437,   439,   441,   443,   445,   451,
     452,   456,   462,   466,   472,   473,   475,   482
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    -1,    80,    81,    -1,    57,    -1,   103,
      -1,   118,    -1,   128,    -1,     8,    -1,    83,    -1,    82,
      58,    83,    -1,    94,    84,    83,    -1,    85,    -1,     1,
      -1,    59,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    21,    -1,    86,    -1,    87,    82,    60,    85,    -1,
      88,    -1,    86,    14,    88,    -1,    -1,    -1,    86,    -1,
      89,    -1,    88,    13,    89,    -1,    90,    -1,    89,    12,
      90,    -1,    89,    11,    90,    -1,    91,    -1,    90,    20,
      91,    -1,    90,    61,    91,    -1,    90,    19,    91,    -1,
      90,    62,    91,    -1,    92,    -1,    91,    63,    92,    -1,
      91,    64,    92,    -1,    93,    -1,    92,    65,    93,    -1,
      92,    66,    93,    -1,    92,    67,    93,    -1,    94,    -1,
      68,   100,    69,    93,    -1,    97,    -1,    95,    94,    -1,
      96,    93,    -1,    94,    95,    -1,    51,    94,    -1,     9,
      -1,    10,    -1,    70,    -1,    66,    -1,    64,    -1,    71,
      -1,    63,    -1,    72,    -1,    99,    -1,    97,    73,    82,
      74,    -1,    97,    68,    98,    69,    -1,    97,    75,   102,
      -1,    97,    24,   102,    -1,    97,     9,    -1,    97,    10,
      -1,    83,    -1,    98,    76,    83,    -1,   102,    -1,     3,
      -1,     4,    -1,     6,    -1,    68,    82,    69,    -1,   101,
      -1,    36,    -1,    38,    -1,    37,    -1,    49,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,     5,
      -1,     5,    59,    82,    -1,   104,    -1,   105,    -1,   117,
      -1,   111,    -1,   112,    -1,   113,    -1,   115,    -1,     1,
      -1,   116,    58,    -1,     1,    -1,    77,   108,   107,    78,
     106,    -1,    77,   109,    78,   106,    -1,    77,   110,    78,
     106,    -1,    77,    78,   106,    -1,     1,    -1,    -1,    58,
      -1,    -1,   110,    -1,    -1,   109,    -1,   109,   118,    -1,
     118,    -1,   103,    -1,   110,   103,    -1,     1,    -1,    27,
      68,    82,    69,   103,    -1,    27,    68,    82,    69,   103,
      28,   103,    -1,    52,    68,    82,    69,   103,    -1,    27,
       1,    -1,    52,     1,    -1,    26,    68,    82,    69,   103,
      -1,    25,   103,    26,    68,    82,    69,    -1,    29,    68,
     116,    58,   116,    58,   116,    69,   103,    -1,    26,     1,
      -1,    25,     1,    -1,    29,     1,    -1,    53,   114,    60,
     103,    -1,    55,    60,   103,    -1,     5,    60,   103,    -1,
      53,     1,    -1,    55,     1,    -1,    85,    -1,    30,   116,
      58,    -1,    56,    58,    -1,    54,    58,    -1,    31,     5,
      58,    -1,    31,     1,    -1,    54,     1,    -1,    56,     1,
      -1,    30,     1,    -1,    -1,    82,    -1,     5,    59,    82,
      58,    -1,   119,    -1,   124,    -1,   101,   120,    58,    -1,
       1,    -1,   121,    -1,   120,    76,   121,    -1,     5,   122,
      -1,    -1,    84,   123,    -1,     3,    -1,     4,    -1,     7,
      -1,     6,    -1,    83,    -1,   101,     5,    68,   125,    69,
      -1,    -1,   101,   127,     5,    -1,   101,   127,     5,    76,
     126,    -1,   101,   127,     5,    -1,   101,   127,     5,    76,
     126,    -1,    -1,    70,    -1,   101,     5,    68,   125,    69,
     103,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   105,   106,   107,   108,   109,   114,
     115,   118,   119,   120,   123,   123,   123,   123,   123,   123,
     126,   127,   130,   131,   134,   135,   135,   138,   139,   142,
     143,   144,   146,   147,   148,   149,   150,   158,   159,   160,
     163,   164,   165,   166,   169,   170,   173,   174,   175,   176,
     177,   180,   181,   184,   184,   184,   184,   184,   184,   187,
     188,   189,   190,   191,   192,   193,   196,   197,   200,   201,
     202,   203,   204,   207,   207,   207,   207,   207,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   222,   223,
     228,   229,   230,   231,   232,   233,   234,   235,   239,   240,
     244,   245,   246,   247,   248,   251,   252,   255,   256,   259,
     260,   263,   264,   267,   268,   269,   273,   274,   275,   276,
     277,   281,   282,   283,   284,   285,   286,   290,   291,   292,
     293,   294,   296,   299,   300,   301,   302,   303,   304,   305,
     306,   309,   310,   314,   318,   319,   322,   323,   326,   327,
     330,   333,   334,   337,   338,   339,   340,   341,   345,   348,
     349,   350,   353,   354,   357,   358,   361,   362
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO_ENTERO", "NUMERO_REAL",
  "IDENTIFICADOR", "LITERALCADENA", "CARACTER", "ERRORLEXICO", "P_INC",
  "P_DEC", "DISTINTO", "IGUAL", "AND", "OR", "DIV_IGUAL", "POR_IGUAL",
  "MENOS_IGUAL", "MAS_IGUAL", "MENOR_IGUAL", "MAYOR_IGUAL", "MOD_IGUAL",
  "BIT_SHIFT_L", "BIT_SHIFT_R", "FLECHITA", "DO", "WHILE", "IF", "ELSE",
  "FOR", "RETURN", "GOTO", "STATIC", "EXTERN", "CONST", "VOLATILE",
  "STRUCT", "UNION", "TYPEDEF", "AUTO", "REGISTER", "CHAR", "INT", "FLOAT",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "VOID", "ENUM", "DOUBLE",
  "SIZEOF", "SWITCH", "CASE", "BREAK", "DEFAULT", "CONTINUE", "'\\n'",
  "';'", "'='", "':'", "'>'", "'<'", "'+'", "'-'", "'/'", "'*'", "'%'",
  "'('", "')'", "'&'", "'!'", "'~'", "'['", "']'", "'.'", "','", "'{'",
  "'}'", "$accept", "input", "line", "expresion", "expresionAs",
  "operadorAs", "expCondicional", "expOr", "expOrOP", "expAnd",
  "expIgualdad", "expRelacional", "expAditiva", "expMultiplicativa",
  "expConversion", "expUnaria", "incremento", "operUnario", "expSufijo",
  "listaArgumentos", "expPrimaria", "nombreTipo", "tipoDato", "ID",
  "sentencia", "sentExp", "sentCompuesta", "PCOp", "listaSentenciasOP",
  "listaDeclaracionesOP", "listaDeclaraciones", "listaSentencias",
  "sentSeleccion", "sentIteracion", "sentEtiquetada", "expConst",
  "sentSalto", "expresionOP", "sentAsignacion", "declaracion",
  "declaracionVariablesSimples", "listaVariablesSimples", "variableSimple",
  "opcionInicializacion", "constante", "declaracionFunciones",
  "opcionArgumentosConTipo", "argumentosConTipo", "opcionReferencia",
  "definicionFunciones", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    10,    59,    61,
      58,    62,    60,    43,    45,    47,    42,    37,    40,    41,
      38,    33,   126,    91,    93,    46,    44,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   111,   111,
     111,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   114,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   122,   123,   123,   123,   123,   123,   124,   125,
     125,   125,   126,   126,   127,   127,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     0,     0,     1,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     2,     2,     1,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     4,     4,     3,     1,     0,     1,     0,     1,     0,
       1,     2,     1,     1,     2,     1,     5,     7,     5,     2,
       2,     5,     6,     9,     2,     2,     2,     4,     3,     3,
       2,     2,     1,     3,     2,     2,     3,     2,     2,     2,
       2,     0,     1,     4,     1,     1,     3,     1,     1,     3,
       2,     0,     2,     1,     1,     1,     1,     1,     5,     0,
       3,     5,     3,     5,     0,     1,     6,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    97,    69,    70,    88,    71,     8,    51,
      52,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,     0,     4,    57,    55,    54,     0,    53,    56,
      58,     0,     3,   142,     9,    12,    20,     0,    22,    27,
      29,    32,    37,    40,    44,     0,     0,    46,    59,     0,
      68,     5,    90,    91,    93,    94,    95,    96,     0,    92,
       6,   144,   145,     7,     0,     0,   125,     0,   124,     0,
     119,     0,   126,     0,   140,    88,     0,   137,     0,     0,
      50,   120,     0,   130,   132,    44,     0,   138,   135,   131,
       0,   139,   134,    13,    74,    76,    75,    77,     0,     0,
      73,    97,   105,     0,   113,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    14,
       0,    49,    47,    48,    64,    65,     0,     0,     0,     0,
     151,     0,   148,    98,    89,    97,   129,     0,     0,     0,
       0,     0,   133,   136,     0,     0,   128,    72,     0,   106,
     103,   151,    97,     0,     0,   147,   105,   111,   105,   114,
      10,    23,    24,    28,    31,    30,    35,    33,    34,    36,
      38,    39,    41,    42,    43,    11,    63,    66,     0,     0,
      62,   159,     0,   150,   146,     0,     0,     0,     0,     0,
       0,    89,     0,   127,    45,   159,   105,   101,   102,    21,
      61,     0,    60,   164,     0,    69,    70,    71,   155,   157,
     152,   151,   149,     0,   121,   116,     0,   118,     0,   100,
      67,   165,     0,     0,   122,     0,     0,   158,   160,   166,
     117,     0,     0,     0,   164,   161,   123,     0,   162,     0,
     163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    42,    43,    44,   202,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,   198,
      58,   109,   113,    60,   114,    62,    63,   170,   173,   115,
     116,   117,    64,    65,    66,    96,    67,    68,    69,    70,
      71,   151,   152,   203,   230,    72,   224,   255,   242,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
    -140,   335,  -140,   -14,  -140,  -140,    12,  -140,  -140,  -140,
    -140,   875,     8,    11,    13,   120,    61,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   286,    19,  1070,
      20,    14,    37,  -140,  -140,  -140,  -140,   987,  -140,  -140,
    -140,   485,  -140,    -9,  -140,  -140,    45,  1142,    52,    85,
     114,    77,    79,  -140,   208,   286,   514,   128,  -140,    63,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    55,  -140,
    -140,  -140,  -140,  -140,  1142,   950,    -2,    89,  -140,  1142,
    -140,  1142,  -140,  1038,   -14,    59,    64,  -140,    78,  1142,
     144,  -140,  1142,  -140,  -140,   144,   100,  -140,  -140,  -140,
     950,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   -16,    93,
    -140,   380,   105,   159,  -140,   641,   563,   719,  -140,  1142,
     514,    31,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,  -140,  -140,  -140,  -140,  -140,  -140,
    1142,  -140,   144,  -140,  -140,  -140,   165,  1142,  1142,   165,
       1,   -28,  -140,  -140,   119,   -14,  -140,   111,    -6,    70,
     122,  1142,  -140,  -140,    73,   950,  -140,  -140,   514,  -140,
    -140,   151,   -14,   103,   797,  -140,   105,  -140,   105,  -140,
    -140,    52,   514,    85,   114,   114,    77,    77,    77,    77,
      79,    79,  -140,  -140,  -140,  -140,  -140,  -140,   -26,   -17,
    -140,   227,    22,  -140,  -140,   177,   256,  1142,   950,   950,
    1038,    -9,   950,  -140,  -140,   227,   105,  -140,  -140,  -140,
    -140,  1142,  -140,   115,   118,  -140,  -140,  -140,  -140,  -140,
    -140,   219,  -140,    74,  -140,   161,   135,  -140,   125,  -140,
    -140,  -140,   190,   410,  -140,   950,  1060,  -140,   123,  -140,
    -140,   129,   227,   950,   115,  -140,  -140,   197,   130,   227,
    -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,   -34,   -86,   150,   -25,  -140,  -140,    87,
      83,    32,    23,    29,   -49,   -21,   -44,  -140,  -140,  -140,
    -140,  -140,    -1,   -82,     0,  -140,  -140,  -139,  -140,  -140,
    -140,    96,  -140,  -140,  -140,  -140,  -140,   -13,  -140,   -36,
    -140,  -140,    10,  -140,  -140,  -140,     5,   -46,   -38,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -159
static const yytype_int16 yytable[] =
{
      59,    61,    86,   108,    94,   118,    90,   143,    95,    78,
     141,    77,    80,   121,    82,    99,   134,   135,   136,   137,
      91,    97,   138,   103,   -97,   225,   226,    85,   227,   228,
     204,     9,    10,   180,   142,    95,   110,   217,   101,   218,
     154,   119,   119,   220,   -13,   158,   141,   159,   205,   119,
     221,   141,   119,   167,   195,   108,   -13,   222,   164,   120,
     139,   197,    87,   208,   196,   122,    88,   200,   150,   201,
     160,    74,    75,    27,   100,   156,    79,   239,    98,    81,
     177,    83,   192,   193,   194,    34,    35,    92,    36,   119,
      37,   182,    38,    39,    40,   102,   123,   124,   141,    95,
     166,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,   153,   199,   157,   229,   179,   161,   214,
     180,    84,   162,     4,     5,    85,     7,   211,   119,     9,
      10,   119,   119,   125,   126,   240,   163,   144,   145,   209,
     129,   130,   212,   244,   131,   132,   133,    95,   186,   187,
     188,   189,   146,     9,    10,   184,   185,   219,   190,   191,
     165,    95,   168,   169,   171,   213,   134,   135,   136,   137,
      85,    27,   138,   233,   179,   127,   128,   206,  -141,   207,
     210,   216,   231,    34,    35,   241,    36,   243,    37,   245,
      38,    39,    40,   246,   247,   248,   147,   236,   253,   252,
     223,   148,   258,   149,   140,   183,   259,   181,   234,   235,
     139,   174,   237,   260,   223,   232,   257,     9,    10,   215,
     238,     0,     0,   134,   135,   136,   137,     0,     0,   138,
       0,     0,     0,   251,   134,   135,   136,   137,     0,     0,
     138,     0,     0,   249,     0,   250,     0,     0,     0,     0,
       0,   254,     0,   256,     0,     0,  -143,   103,   254,     4,
       5,    85,     7,     0,  -143,     9,    10,   139,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   139,     0,
       0,  -143,  -143,  -143,  -143,  -143,  -143,  -143,     0,     4,
       5,    85,     7,     0,     0,     9,    10,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,    27,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,     0,     0,     0,     0,    34,
      35,     0,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,     0,  -143,  -143,     2,     3,    27,     4,     5,
       6,     7,     0,     8,     9,    10,     0,     0,     0,    34,
      35,     0,    36,     0,    89,     0,    38,    39,    40,     0,
      11,    12,    13,     0,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,  -141,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,     0,    38,    39,    40,     0,     0,
    -158,   155,    41,     4,     5,     6,     7,     0,  -158,     9,
      10,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,     0,     0,     0,     0,    11,    12,    13,   -13,    14,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,    27,    28,    29,    30,    31,    32,  -158,  -141,     0,
       0,     0,     0,    34,    35,     0,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,   111,    41,     4,     5,
       6,     7,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,     0,    14,    15,    16,     4,     5,    85,
       7,     0,     0,     9,    10,     0,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,  -109,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,     0,    41,   112,   175,    27,  -110,  -110,  -110,  -110,
       0,     0,  -110,  -110,     0,     0,     0,    34,    35,     0,
      36,     0,    37,     0,    38,    39,    40,     0,  -110,  -110,
    -110,     0,  -110,  -110,  -110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,  -110,  -110,  -110,  -110,  -110,  -110,
       0,  -110,     0,     0,     0,     0,  -110,  -110,     0,  -110,
       0,  -110,     0,  -110,  -110,  -110,     0,     0,     0,     0,
    -110,   176,   172,     0,     4,     5,     6,     7,     0,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
      14,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,     0,  -141,
       0,     0,     0,     0,    34,    35,     0,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     0,     0,    41,  -107,
     155,     0,     4,     5,     6,     7,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,     0,    14,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,    31,    32,     0,  -141,     0,     0,
       0,     0,    34,    35,     0,    36,     0,    37,     0,    38,
      39,    40,     0,     0,     0,     0,    41,   178,   155,     0,
       4,     5,     6,     7,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,     0,    14,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,     0,  -141,     0,     0,     0,     0,
      34,    35,     0,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,     0,    41,  -108,    76,     0,     4,     5,
       6,     7,     0,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,     0,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,    29,    30,
      31,    32,     0,  -141,     0,     0,     0,     0,    34,    35,
       0,    36,     0,    37,     0,    38,    39,    40,     0,     0,
       0,   155,    41,     4,     5,     6,     7,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,     0,    14,
      15,    16,     0,     0,     0,     0,     0,     0,   103,     0,
       4,     5,    85,     7,     0,     0,     9,    10,     0,     0,
       0,    27,    28,    29,    30,    31,    32,     0,  -141,     0,
       0,     0,     0,    34,    35,     0,    36,     0,    37,     0,
      38,    39,    40,   104,   105,   106,     0,    41,    17,    18,
      19,    20,    21,    22,    23,    24,   107,    26,    27,   103,
       0,     4,     5,    85,     7,     0,     0,     9,    10,     0,
      34,    35,     0,    36,     0,    37,     0,    38,    39,    40,
       0,   103,     0,     4,     5,    85,     7,     0,     0,     9,
      10,    93,     0,     4,     5,    85,     7,     0,     0,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,  -141,     0,     0,     0,
       0,    34,    35,     0,    36,     0,    37,     0,    38,    39,
      40,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    34,    35,     0,    36,     0,    37,  -141,
      38,    39,    40,    34,    35,     0,    36,     0,    37,     0,
      38,    39,    40,   103,     0,     4,     5,    85,     7,     0,
       0,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,    36,     0,
      37,     0,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
       1,     1,    15,    37,    29,    41,    27,    56,    29,     1,
      54,    11,     1,    47,     1,     1,    15,    16,    17,    18,
       1,     1,    21,     1,    26,     3,     4,     5,     6,     7,
      58,     9,    10,   119,    55,    56,    37,   176,     1,   178,
      74,    58,    58,    69,    58,    79,    90,    81,    76,    58,
      76,    95,    58,    69,   140,    89,    58,    74,    92,    14,
      59,   147,     1,    69,   146,    13,     5,   149,     5,    68,
      83,    59,    60,    51,    60,    75,    68,   216,    58,    68,
     116,    68,   131,   132,   133,    63,    64,    68,    66,    58,
      68,    60,    70,    71,    72,    58,    11,    12,   142,   120,
     100,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    58,   148,    26,   202,   117,    59,   168,
     206,     1,    58,     3,     4,     5,     6,   161,    58,     9,
      10,    58,    58,    19,    20,   221,    58,     9,    10,    69,
      63,    64,    69,    69,    65,    66,    67,   168,   125,   126,
     127,   128,    24,     9,    10,   123,   124,   182,   129,   130,
      60,   182,    69,    58,     5,   165,    15,    16,    17,    18,
       5,    51,    21,   207,   174,    61,    62,    58,    58,    68,
      58,    78,     5,    63,    64,    70,    66,    69,    68,    28,
      70,    71,    72,    58,    69,     5,    68,   210,    69,    76,
     201,    73,     5,    75,    54,   122,    76,   120,   208,   209,
      59,   115,   212,   259,   215,   205,   254,     9,    10,    68,
     215,    -1,    -1,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    -1,    -1,   246,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   252,    -1,   253,    -1,    -1,     0,     1,   259,     3,
       4,     5,     6,    -1,     8,     9,    10,    59,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    59,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,
      -1,    -1,    -1,    77,    78,     0,     1,    51,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    -1,    -1,    63,
      64,    -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
       0,     1,    77,     3,     4,     5,     6,    -1,     8,     9,
      10,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    25,    26,    27,    58,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,
      70,    71,    72,    -1,    -1,    -1,     1,    77,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,     3,     4,     5,
       6,    -1,    -1,     9,    10,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,    -1,    77,    78,     1,    51,     3,     4,     5,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    63,    64,    -1,
      66,    -1,    68,    -1,    70,    71,    72,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,    66,
      -1,    68,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    78,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    64,    -1,    66,    -1,    68,
      -1,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    78,
       1,    -1,     3,     4,     5,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,    78,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    66,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    78,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    64,
      -1,    66,    -1,    68,    -1,    70,    71,    72,    -1,    -1,
      -1,     1,    77,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    63,    64,    -1,    66,    -1,    68,    -1,
      70,    71,    72,    36,    37,    38,    -1,    77,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    -1,
      63,    64,    -1,    66,    -1,    68,    -1,    70,    71,    72,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    66,    -1,    68,    -1,    70,    71,
      72,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    63,    64,    -1,    66,    -1,    68,    69,
      70,    71,    72,    63,    64,    -1,    66,    -1,    68,    -1,
      70,    71,    72,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    66,    -1,
      68,    -1,    70,    71,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    80,     0,     1,     3,     4,     5,     6,     8,     9,
      10,    25,    26,    27,    29,    30,    31,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    63,    64,    66,    68,    70,    71,
      72,    77,    81,    82,    83,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    99,   101,
     102,   103,   104,   105,   111,   112,   113,   115,   116,   117,
     118,   119,   124,   128,    59,    60,     1,   103,     1,    68,
       1,    68,     1,    68,     1,     5,   116,     1,     5,    68,
      94,     1,    68,     1,    85,    94,   114,     1,    58,     1,
      60,     1,    58,     1,    36,    37,    38,    49,    82,   100,
     101,     1,    78,   101,   103,   108,   109,   110,   118,    58,
      14,    82,    13,    11,    12,    19,    20,    61,    62,    63,
      64,    65,    66,    67,    15,    16,    17,    18,    21,    59,
      84,    95,    94,    93,     9,    10,    24,    68,    73,    75,
       5,   120,   121,    58,    82,     1,   103,    26,    82,    82,
     116,    59,    58,    58,    82,    60,   103,    69,    69,    58,
     106,     5,     1,   107,   110,     1,    78,   118,    78,   103,
      83,    88,    60,    89,    90,    90,    91,    91,    91,    91,
      92,    92,    93,    93,    93,    83,   102,    83,    98,    82,
     102,    68,    84,   122,    58,    76,    58,    68,    69,    69,
      58,    82,    69,   103,    93,    68,    78,   106,   106,    85,
      69,    76,    74,   101,   125,     3,     4,     6,     7,    83,
     123,     5,   121,    82,   103,   103,   116,   103,   125,   106,
      83,    70,   127,    69,    69,    28,    58,    69,     5,   103,
     103,   116,    76,    69,   101,   126,   103,   127,     5,    76,
     126
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 105 "AnalizadorSintactico.y"
    {fprintf(yyout,"\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 106 "AnalizadorSintactico.y"
    {fprintf(yyout,"--------SENTENCIA--------\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 107 "AnalizadorSintactico.y"
    {fprintf(yyout,"--------DECLARACION--------\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "AnalizadorSintactico.y"
    {fprintf(yyout,"-------FUNCION--------\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 109 "AnalizadorSintactico.y"
    {fprintf(yyout, "\nSE DETECTO UN ERROR LEXICO: %s \n", (yyvsp[(1) - (1)].texto));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 114 "AnalizadorSintactico.y"
    {fprintf(yyout,"-------EXPRESION--------\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 115 "AnalizadorSintactico.y"
    {fprintf(yyout,"-------EXPRESION--------\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 127 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un : \n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 131 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un || \n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 139 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un && \n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 143 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un == \n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 144 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un != \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 147 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un >= \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 148 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un > \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 149 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un <= \n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 150 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un >= \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 159 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un + \n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 160 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un - \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 164 "AnalizadorSintactico.y"
    { if((yyvsp[(3) - (3)].real) == 0){printf("ERROR AL DIVIDIR POR 0"); return 0;}else (yyval.real) = (yyvsp[(1) - (3)].real) / (yyvsp[(3) - (3)].real); fprintf(yyout,"se utiliza un / \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 165 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un * \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 166 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un % \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un ++ \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 181 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un -- \n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 188 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza [ y ] \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 189 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un ( y un )\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 190 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un . \n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 191 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un -> \n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 192 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un ++ \n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 193 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un -- \n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 200 "AnalizadorSintactico.y"
    {fprintf(yyout, "Identificador = %s \n",(yyvsp[(1) - (1)].texto));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 201 "AnalizadorSintactico.y"
    {fprintf(yyout, "Num entero = %d \n",(yyvsp[(1) - (1)].entero));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 202 "AnalizadorSintactico.y"
    {fprintf(yyout, "Num real = %f \n",(yyvsp[(1) - (1)].real));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 203 "AnalizadorSintactico.y"
    {fprintf(yyout, "String = %s \n",(yyvsp[(1) - (1)].texto));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 210 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 211 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 212 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 213 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 214 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 215 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 216 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 217 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 218 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 219 "AnalizadorSintactico.y"
    {tipodato = strdup((yyvsp[(1) - (1)].texto));;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 228 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia expresion \n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 230 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de asignacion\n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 231 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de seleccion\n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 232 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de iteracion\n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 233 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia etiquetada\n");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 234 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia de salto\n");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 235 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR AL DEFINIR LA SENTENCIA \n");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 240 "AnalizadorSintactico.y"
    {fprintf(yyout,"falta ; en la definicion de la sentencia de expresion \n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 244 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 245 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 246 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 247 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se declaro una sentencia compuesta\n");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 248 "AnalizadorSintactico.y"
    {fprintf(yyout, "error al declarar la sentencia compuesta\n");;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 269 "AnalizadorSintactico.y"
    {printf("ERROR AL DEFINIR LA SENTENCIA \n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 273 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza el If \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 274 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el If Else \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 275 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el Switch \n");}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 276 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR SINTACTICO EN EL IF\n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 277 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL SWITCH\n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 281 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza el While \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 282 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza el Do While \n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 283 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el For \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 284 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL WHILE\n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 285 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL DO\n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 286 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL FOR\n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 290 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza un Case \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 291 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el Default \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 293 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL CASE\n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 294 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL DEFAULT\n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 299 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el return \n");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 300 "AnalizadorSintactico.y"
    {fprintf(yyout, "Se utiliza el Continue \n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 301 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el Break \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 302 "AnalizadorSintactico.y"
    {fprintf(yyout,"Se utiliza el Goto\n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 303 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL GOTO, mal identificador\n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 304 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL BREAK, falta ;\n");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 305 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL CONTINUE, falta ;\n");;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 306 "AnalizadorSintactico.y"
    {fprintf(yyout, "ERROR SINTACTICO EN EL RETURN, falta ;\n");;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 322 "AnalizadorSintactico.y"
    {fprintf(yyout,"se declaro una variable de tipo %s llamada %s\n", tipodato,nombre);;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 323 "AnalizadorSintactico.y"
    {fprintf(yyout,"Falta el ; en la declaracion \n"); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 330 "AnalizadorSintactico.y"
    { nombre = strdup((yyvsp[(1) - (2)].texto)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 337 "AnalizadorSintactico.y"
    {fprintf(yyout,"num = %d\n",(yyvsp[(1) - (1)].entero));;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 338 "AnalizadorSintactico.y"
    {fprintf(yyout,"float = %f\n",(yyvsp[(1) - (1)].real));;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 339 "AnalizadorSintactico.y"
    {fprintf(yyout,"caracter = %c \n", (yyvsp[(1) - (1)].caracter));;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 340 "AnalizadorSintactico.y"
    {fprintf(yyout,"literal = %s \n", (yyvsp[(1) - (1)].texto));;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 345 "AnalizadorSintactico.y"
    {fprintf(yyout,"se declara una funcion de tipo %s llamada %s\n",tipodato, (yyvsp[(2) - (5)].texto));;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 361 "AnalizadorSintactico.y"
    {fprintf(yyout,"se define una funcion de tipo %s llamada %s\n",tipodato, (yyvsp[(2) - (6)].texto));;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 362 "AnalizadorSintactico.y"
    {fprintf(yyout,"ERROR AL DEFINIR LA FUNCION\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2499 "AnalizadorSintactico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 366 "AnalizadorSintactico.y"


int main (){

  int flag;

  yyin = fopen("entrada.c", "r");
  yyout = fopen("salida.txt", "w");

  fprintf(yyout,"-------------------REPORTE-------------------\n\n");
  #ifdef BISON_DEBUG
       yydebug = 1;
    #endif

  flag = yyparse ();
  fprintf(yyout,"\n\n-------------finalizo el analisis----------\n:)");
  fclose(yyin);
  fclose(yyout);
  return flag;
}
