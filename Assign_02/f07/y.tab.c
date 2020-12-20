#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "f07.y"
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
#line 31 "y.tab.c"
#define MAIN 257
#define IF 258
#define ELSEIF 259
#define ELSE 260
#define FOR 261
#define WHILE 262
#define DO 263
#define READ 264
#define PRINT 265
#define INT 266
#define FLOAT 267
#define AND 268
#define OR 269
#define LE 270
#define GE 271
#define GT 272
#define LT 273
#define NE 274
#define INC 275
#define DEC 276
#define EQ 277
#define ALP 278
#define NUM 279
#define INC_BY 280
#define DEC_BY 281
#define MUL_BY 282
#define DIV_BY 283
#define UMINUS 284
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    2,    2,    2,    2,    2,    2,    2,    2,    2,
   10,   10,    6,    6,    6,   13,   13,   14,   12,   12,
    7,    8,    9,    4,    4,    4,    3,    3,    1,    1,
    1,   11,   11,   11,   16,   16,   15,   15,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,   19,   19,
   19,   19,   18,   18,   18,   17,   17,   17,   17,   17,
   17,
};
short yylen[] = {                                         2,
    7,    5,    3,    2,    2,    2,    2,    6,    6,    0,
    1,    1,    5,    6,    6,    6,    6,    2,    3,    1,
    9,    5,    9,    2,    2,    0,    1,    1,    1,    1,
    0,    0,    3,    1,    1,    1,    3,    1,    3,    3,
    3,    3,    3,    3,    2,    2,    3,    1,    1,    1,
    1,    1,    1,    1,    0,    1,    1,    1,    1,    1,
    1,
};
short yydefred[] = {                                      0,
   29,   30,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   27,   28,    0,   48,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   53,   54,   49,   50,   51,   52,    0,
   46,    0,   45,    0,    1,    0,    0,    0,    0,    0,
    0,    4,    5,    6,    7,    0,    0,    0,    0,    0,
    0,   11,   12,    0,    0,   39,    0,   44,    0,    0,
    0,    0,   42,   43,    3,   59,   56,   60,   58,   57,
   61,    0,    0,   35,   36,    0,    0,    0,    0,    0,
    0,   25,   24,    0,    0,    0,   20,    0,   33,    0,
   22,    0,    0,    0,    2,    0,    0,    0,   14,   15,
    0,    0,    8,    9,   19,    0,   18,    0,    0,    0,
    0,    0,    0,   21,   23,    0,   16,   17,
};
short yydgoto[] = {                                       3,
    4,   97,   22,   70,   23,   24,   25,   26,   27,   64,
   57,   98,  109,  110,   58,   86,   82,   41,   42,
};
short yysindex[] = {                                   -263,
    0,    0,    0, -248,  -21,  -24,  -91,  -11,    7,   13,
   15,  -66,   42,   44,    0,    0,   35,    0,  -38,  -38,
  -54, -178,  -22,  -11,  -11,  -11,  -11,  -38,  -38,  -38,
  -11, -265, -265,    0,    0,    0,    0,    0,    0,  -38,
    0,  -38,    0,   78,    0,   41,  -38,  -38,  -38,  -38,
  -11,    0,    0,    0,    0,  -12,   51, -241,   16,   62,
  -16,    0,    0,   70,   71,    0,   46,    0, -228,   54,
  -31,  -31,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -38,  -40,    0,    0,  -38,  -38,  -40, -147,   63,
   65,    0,    0,  -11,   46,  -11,    0, -186,    0,   72,
    0,   89,  -11,  -11,    0,    9,   93,  -40,    0,    0,
  -38,  -38,    0,    0,    0,  -38,    0,   85,   96,   97,
  -40,   81,  -40,    0,    0, -186,    0,    0,
};
short yyrindex[] = {                                   -116,
    0,    0,    0,    0,    0,    0,    0,   17,    0,    0,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,    0, -124, -124, -124, -124,  104,    0,  104,
   17,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   87,    0,    0,    0,    0,
 -124,    0,    0,    0,    0,  -23,    0,  -35,    0,    0,
    0,    0,    0,    0,    0,    0,   31,    0,    0,    0,
   11,   21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -124,    0,    0,  -33,   88, -124,    0,    0,
    0,    0,    0, -124,    8,   17,    0,  -30,    0,    0,
    0,    0, -124, -124,    0,    0,    0, -124,    0,    0,
    0,  104,    0,    0,    0,  104,    0,    0,    0,    0,
 -124,    0, -181,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,   14,    0,    0,   57,    0,    0,    0,    0,  115,
  -18,   -7,   23,   24,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 318
short yytable[] = {                                      20,
   10,   20,    1,    2,   19,   34,   19,   32,    5,   13,
   49,   60,   62,   63,   13,   50,    7,   38,    6,   49,
   47,   21,   48,   34,   50,   32,   84,   85,   20,   49,
   47,    8,   48,   19,   50,   38,   51,   52,   53,   54,
   55,   55,   55,   55,   61,   55,   28,   55,   37,   92,
   93,   40,   29,   40,   30,   40,   31,   49,   47,   55,
   48,   41,   50,   41,   75,   41,   37,   99,  100,   40,
   45,   47,  107,  108,   87,   43,   44,   10,   10,   41,
  101,   32,   96,   33,   56,   59,   56,   49,   47,   47,
   48,   83,   50,  119,   13,   40,   66,  120,   67,   46,
  117,   69,   88,   71,   72,   73,   74,  105,   89,  106,
   90,   91,   94,  124,  102,  126,  113,  114,   68,   49,
   47,  103,   48,  104,   50,  121,   49,   47,  112,   48,
  111,   50,  116,  115,   10,   10,  122,  123,   95,  125,
   31,   10,   56,   56,   32,   26,   32,   65,  127,  128,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  118,   56,    0,
    0,    0,   56,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    9,    0,    0,
   10,   11,   12,   13,   14,   15,   16,   13,    0,    0,
   13,   13,   13,   13,   13,   13,   13,   17,   18,   17,
   18,    0,    0,    0,   38,   38,    9,   13,   13,   10,
   11,   12,   13,   14,   15,   16,    0,   76,   77,   78,
   79,   80,    0,    0,   81,    0,   17,   18,   55,   55,
   55,   55,   55,   55,   55,   37,   37,   55,   40,   40,
   40,   40,   40,   40,   40,    0,    0,   40,   41,   41,
   41,   41,   41,   41,   41,    0,    0,   41,   47,   47,
   47,   47,   47,   47,   47,    0,    0,   47,    0,   34,
   35,    0,    0,    0,   36,   37,   38,   39,
};
short yycheck[] = {                                      40,
  125,   40,  266,  267,   45,   41,   45,   41,  257,   40,
   42,   30,  278,  279,   45,   47,   41,   41,   40,   42,
   43,    8,   45,   59,   47,   59,  268,  269,   40,   42,
   43,  123,   45,   45,   47,   59,   59,   24,   25,   26,
   27,   41,   42,   43,   31,   45,   40,   47,   41,  278,
  279,   41,   40,   43,   40,   45,  123,   42,   43,   59,
   45,   41,   47,   43,   51,   45,   59,   86,   87,   59,
  125,   41,  259,  260,   59,   19,   20,  259,  260,   59,
   88,   40,  123,   40,   28,   29,   30,   42,   43,   59,
   45,   41,   47,  112,  125,   61,   40,  116,   42,  278,
  108,   61,   41,   47,   48,   49,   50,   94,  125,   96,
   41,   41,   59,  121,  262,  123,  103,  104,   41,   42,
   43,   59,   45,   59,   47,   41,   42,   43,   40,   45,
   59,   47,   40,  125,  259,  260,   41,   41,   82,   59,
  257,  125,   86,   87,   41,   59,   59,   33,  126,  126,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  111,  112,   -1,
   -1,   -1,  116,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,   -1,   -1,
  261,  262,  263,  264,  265,  266,  267,  258,   -1,   -1,
  261,  262,  263,  264,  265,  266,  267,  278,  279,  278,
  279,   -1,   -1,   -1,  268,  269,  258,  278,  279,  261,
  262,  263,  264,  265,  266,  267,   -1,  270,  271,  272,
  273,  274,   -1,   -1,  277,   -1,  278,  279,  268,  269,
  270,  271,  272,  273,  274,  268,  269,  277,  268,  269,
  270,  271,  272,  273,  274,   -1,   -1,  277,  268,  269,
  270,  271,  272,  273,  274,   -1,   -1,  277,  268,  269,
  270,  271,  272,  273,  274,   -1,   -1,  277,   -1,  275,
  276,   -1,   -1,   -1,  280,  281,  282,  283,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 284
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",
0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"MAIN","IF","ELSEIF","ELSE","FOR","WHILE","DO","READ","PRINT","INT",
"FLOAT","AND","OR","LE","GE","GT","LT","NE","INC","DEC","EQ","ALP","NUM",
"INC_BY","DEC_BY","MUL_BY","DIV_BY","UMINUS",
};
char *yyrule[] = {
"$accept : START",
"START : TYPE MAIN '(' ')' '{' CY '}'",
"CY : TYPE_COMPULSORY ALP INIT ';' CY",
"CY : EXP ';' CY",
"CY : IF_X CY",
"CY : FOR_X CY",
"CY : WHILE_X CY",
"CY : DO_WHILE CY",
"CY : READ '(' DATA ')' ';' CY",
"CY : PRINT '(' DATA ')' ';' CY",
"CY :",
"DATA : ALP",
"DATA : NUM",
"IF_X : IF '(' COND ')' FUNC",
"IF_X : IF '(' COND ')' FUNC IF_Y",
"IF_X : IF '(' COND ')' FUNC IF_Z",
"IF_Y : ELSEIF '(' COND ')' FUNC IF_Y",
"IF_Y : ELSEIF '(' COND ')' FUNC IF_Z",
"IF_Z : ELSE FUNC",
"FUNC : '{' CY '}'",
"FUNC : CY",
"FOR_X : FOR '(' EXP ';' COND ';' EXP ')' FUNC",
"WHILE_X : WHILE '(' COND ')' FUNC",
"DO_WHILE : DO '{' CY '}' WHILE '(' COND ')' ';'",
"INIT : '=' NUM",
"INIT : '=' ALP",
"INIT :",
"TYPE_COMPULSORY : INT",
"TYPE_COMPULSORY : FLOAT",
"TYPE : INT",
"TYPE : FLOAT",
"TYPE :",
"COND :",
"COND : X LOGIC_OPERATOR COND",
"COND : X",
"LOGIC_OPERATOR : AND",
"LOGIC_OPERATOR : OR",
"X : EXP RELATION_COMP EXP",
"X : EXP",
"EXP : ALP '=' EXP",
"EXP : EXP '+' EXP",
"EXP : EXP '-' EXP",
"EXP : EXP '*' EXP",
"EXP : EXP '/' EXP",
"EXP : '(' EXP ')'",
"EXP : '-' EXP",
"EXP : ALP OP",
"EXP : ALP OP2 EXP",
"EXP : NUM",
"OP2 : INC_BY",
"OP2 : DEC_BY",
"OP2 : MUL_BY",
"OP2 : DIV_BY",
"OP : INC",
"OP : DEC",
"OP :",
"RELATION_COMP : GE",
"RELATION_COMP : NE",
"RELATION_COMP : LT",
"RELATION_COMP : LE",
"RELATION_COMP : GT",
"RELATION_COMP : EQ",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 105 "f07.y"
int yywrap(){
	return 1;
}
int main(){
	yyparse();
	return 0;
}
int yyerror(char* msg){
        printf("FAIL\n");
        printf("ERROR MESSAGE : %s\nLINE # : %d\nyytext : %s\n", msg, yylineno, yytext);
        exit (EXIT_FAILURE);
        return 0;
}

#line 335 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 22 "f07.y"
{ printf("PASS\n"); 
      		exit (EXIT_SUCCESS);
	}
break;
#line 522 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
