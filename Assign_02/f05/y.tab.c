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
#line 2 "f05.y"
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
#line 31 "y.tab.c"
#define FOR 257
#define AND 258
#define OR 259
#define LE 260
#define GE 261
#define GT 262
#define LT 263
#define NE 264
#define INC 265
#define DEC 266
#define EQ 267
#define ALP 268
#define NUM 269
#define END 270
#define UMINUS 271
#define IF 272
#define ELSE 273
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    2,    2,    4,    4,    4,    3,    3,    3,
    7,    7,    6,    6,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    8,
    8,    8,    8,    8,    8,
};
short yylen[] = {                                         2,
    1,   11,    1,    0,    2,    3,    0,    0,    3,    1,
    1,    1,    3,    1,    3,    3,    3,    3,    3,    4,
    4,    4,    4,    3,    2,    1,    1,    2,    2,    1,
    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,   27,    0,    0,    0,    0,
   28,   29,    0,   25,    0,    0,    0,    0,    0,    0,
   15,   24,    0,    0,    0,    0,    0,    0,    0,    0,
   18,    0,   19,    0,   33,   30,   34,   32,   31,   35,
    0,   11,   12,    0,   20,   21,   22,   23,    0,    0,
    9,    0,    0,    0,    0,    0,    5,    2,    0,    6,
};
short yydgoto[] = {                                       2,
   54,    9,   23,   55,   56,   25,   44,   41,
};
short yysindex[] = {                                   -243,
  -22,    0,    0,  -30,  -60,    0,  -30,  -30,  -43,   37,
    0,    0,  -30,    0,    2,  -30,  -40,  -38,  -36,  -34,
    0,    0,  -26,   15, -205,  -30,  -16,  -30,  -16,  -30,
    0,  -30,    0,  -30,    0,    0,    0,    0,    0,    0,
  -30,    0,    0,  -30,    0,    0,    0,    0,   -4,   37,
    0,  -84,  -32,  -32,  -74,  -23,    0,    0,  -32,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,  -18,  -13,    0,    0,    0,    0,  -24,
    0,    0,    0,    0,    0,    8,    0,    0,    0,    0,
    0,    0,    0,  -56,   10,    0,   -3,    0,    7,    0,
    0,    0,    0,   14,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    8,    0,    0,    0,    0,    0,  -47,
    0,    0,  -66,  -66,    0,    0,    0,    0,  -66,    0,
};
short yygindex[] = {                                      0,
   71,   38,   34,    9,   57,    0,    0,    0,
};
#define YYTABLESIZE 282
short yytable[] = {                                       8,
   13,    8,   14,    8,    7,    8,    7,    8,    7,    8,
    7,   13,    7,    1,    7,   16,    3,    4,   19,   17,
   26,   18,   28,   20,   30,   19,   32,   26,   26,   26,
   20,   26,   34,   26,    3,   59,   52,   16,   53,   16,
    4,   16,   22,   19,   17,   26,   18,   17,   20,   17,
   58,   17,   42,   43,    4,   16,   19,   17,    7,   18,
   10,   20,   57,   14,   15,   17,    8,   60,   10,   21,
    3,   49,   24,   27,   29,   31,   33,   51,   19,   17,
    0,   18,   45,   20,   46,    0,   47,    0,   48,    0,
   10,    0,    0,    0,    0,    0,    0,   50,    0,    0,
   24,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   14,   14,    0,   11,   12,    0,    0,    0,    0,
   13,   13,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    0,    0,    5,    6,    5,
    6,    5,    6,    5,    6,    5,    6,    5,    6,    0,
    0,    0,    0,    0,   26,   26,   26,   26,   26,   26,
   26,    0,    0,   26,   16,   16,   16,   16,   16,   16,
   16,    0,    0,   16,   17,   17,   17,   17,   17,   17,
   17,    0,    0,   17,   35,   36,   37,   38,   39,    0,
    0,   40,
};
short yycheck[] = {                                      40,
   61,   40,   59,   40,   45,   40,   45,   40,   45,   40,
   45,   59,   45,  257,   45,   59,   41,   40,   42,   43,
   61,   45,   61,   47,   61,   42,   61,   41,   42,   43,
   47,   45,   59,   47,   59,   59,   41,   41,  123,   43,
   59,   45,   41,   42,   43,   59,   45,   41,   47,   43,
  125,   45,  258,  259,   41,   59,   42,   43,  125,   45,
    4,   47,   54,    7,    8,   59,   59,   59,   59,   13,
    0,   34,   16,   17,   18,   19,   20,   44,   42,   43,
   -1,   45,   26,   47,   28,   -1,   30,   -1,   32,   -1,
   34,   -1,   -1,   -1,   -1,   -1,   -1,   41,   -1,   -1,
   44,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  258,  259,   -1,  265,  266,   -1,   -1,   -1,   -1,
  258,  259,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,   -1,  268,  269,  268,
  269,  268,  269,  268,  269,  268,  269,  268,  269,   -1,
   -1,   -1,   -1,   -1,  258,  259,  260,  261,  262,  263,
  264,   -1,   -1,  267,  258,  259,  260,  261,  262,  263,
  264,   -1,   -1,  267,  258,  259,  260,  261,  262,  263,
  264,   -1,   -1,  267,  260,  261,  262,  263,  264,   -1,
   -1,  267,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",
0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"FOR","AND","OR","LE","GE","GT","LT","NE","INC","DEC","EQ","ALP","NUM",
"END","UMINUS","IF","ELSE",
};
char *yyrule[] = {
"$accept : START",
"START : ST",
"ST : FOR '(' EXPX ';' COND ';' EXPX ')' '{' BODY '}'",
"EXPX : EXP",
"EXPX :",
"BODY : ST BODY",
"BODY : EXP ';' BODY",
"BODY :",
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
"EXP : EXP '+' '=' EXP",
"EXP : EXP '-' '=' EXP",
"EXP : EXP '*' '=' EXP",
"EXP : EXP '/' '=' EXP",
"EXP : '(' EXP ')'",
"EXP : '-' EXP",
"EXP : ALP",
"EXP : NUM",
"EXP : ALP INC",
"EXP : ALP DEC",
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
#line 75 "f05.y"

int yywrap(){
	return 0;
}

int main(){

	yyparse();
	return 0;
}

int yyerror(char* msg){
        printf("-------- ERROR DETECTED --------\n");
        printf("ERROR MESSAGE : %s\nLINE # : %d\nyytext : %s\n", msg, yylineno, yytext);
        exit (EXIT_FAILURE);
        return 0;
}
#line 265 "y.tab.c"
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
#line 23 "f05.y"
{ printf("CORRECT FOR LOOP\n"); 
      		exit (EXIT_SUCCESS);
	}
break;
#line 452 "y.tab.c"
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
