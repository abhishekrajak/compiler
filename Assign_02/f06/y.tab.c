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
#line 2 "f06.y"
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
#line 31 "y.tab.c"
#define WHILE 257
#define BEGINX 258
#define END 259
#define AND 260
#define OR 261
#define LE 262
#define GE 263
#define GT 264
#define LT 265
#define NE 266
#define INC 267
#define DEC 268
#define EQ 269
#define ALP 270
#define NUM 271
#define UMINUS 272
#define IF 273
#define ELSE 274
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    3,    3,    3,    2,    2,    2,    6,    6,
    5,    5,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    7,    7,    7,    7,    7,    7,
};
short yylen[] = {                                         2,
    1,    7,    1,    3,    0,    0,    3,    1,    1,    1,
    3,    1,    3,    3,    3,    3,    3,    3,    2,    1,
    1,    2,    2,    1,    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,   21,    0,    0,    0,    0,
    0,   22,   23,    0,   19,    0,    0,   27,   24,   28,
   26,   25,   29,    0,    0,    0,    0,    0,    9,   10,
    0,   13,   18,    0,    0,    0,   16,   17,    0,    7,
    3,    0,    0,    2,    0,    4,
};
short yydgoto[] = {                                       2,
   41,    9,   42,   10,   11,   31,   28,
};
short yysindex[] = {                                   -246,
  -27,    0,    0,  -38,  -60,    0,  -38,  -38,  -23,    2,
 -238,    0,    0,  -38,    0,  -11, -234,    0,    0,    0,
    0,    0,    0,  -38,  -38,  -38,  -38,  -38,    0,    0,
  -38,    0,    0,  -40,  -39,  -39,    0,    0,    9,    0,
    0, -239,  -33,    0,  -40,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,  -13,  -26,    0,    0,    0,    0,  -37,
   -3,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -13,    0,    0, -219,  -16,   -6,    0,    0,  -35,    0,
    0,    0,    0,    0, -219,    0,
};
short yygindex[] = {                                      0,
   46,   19,   10,   34,    0,    0,    0,
};
#define YYTABLESIZE 271
short yytable[] = {                                       8,
   14,    8,   26,   12,    7,   11,    7,   27,   26,   24,
    1,   25,    4,   27,   20,   20,   20,   17,   20,   44,
   20,   29,   30,   34,   14,   45,   14,    6,   14,   33,
   26,   24,   20,   25,   15,   27,   15,    8,   15,    5,
   15,   16,   14,   26,   24,    3,   25,   32,   27,   40,
   26,   24,   15,   25,   46,   27,    0,   35,   36,   37,
   38,   39,    0,    0,    0,    0,    0,   43,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   43,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   12,   13,    0,    0,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,   12,   12,   11,   11,    0,    0,    0,    5,
    6,    5,    6,   20,   20,   20,   20,   20,   20,   20,
    0,    0,   20,   14,   14,   14,   14,   14,   14,   14,
    0,    0,   14,   15,   15,   15,   15,   15,   15,   15,
    0,    0,   15,   18,   19,   20,   21,   22,    0,    0,
   23,
};
short yycheck[] = {                                      40,
   61,   40,   42,   41,   45,   41,   45,   47,   42,   43,
  257,   45,   40,   47,   41,   42,   43,   41,   45,  259,
   47,  260,  261,  258,   41,   59,   43,   41,   45,   41,
   42,   43,   59,   45,   41,   47,   43,   41,   45,  259,
    7,    8,   59,   42,   43,    0,   45,   14,   47,   31,
   42,   43,   59,   45,   45,   47,   -1,   24,   25,   26,
   27,   28,   -1,   -1,   -1,   -1,   -1,   34,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   45,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  267,  268,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,
   -1,   -1,  260,  261,  260,  261,   -1,   -1,   -1,  270,
  271,  270,  271,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,  269,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,  269,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,  269,  262,  263,  264,  265,  266,   -1,   -1,
  269,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 274
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",
0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"WHILE","BEGINX","END","AND","OR","LE","GE","GT","LT","NE","INC","DEC","EQ",
"ALP","NUM","UMINUS","IF","ELSE",
};
char *yyrule[] = {
"$accept : START",
"START : ST",
"ST : WHILE '(' COND ')' BEGINX SE END",
"SE : ST",
"SE : EXP ';' SE",
"SE :",
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
#line 67 "f06.y"

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
#line 253 "y.tab.c"
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
#line 23 "f06.y"
{ printf("CORRECT WHILE LOOP BLOCK\n"); 
      		exit (EXIT_SUCCESS);
	}
break;
#line 440 "y.tab.c"
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
