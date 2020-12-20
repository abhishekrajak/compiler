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
#line 2 "f04.y"
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
#line 31 "y.tab.c"
#define IF 257
#define ELSEIF 258
#define ELSE 259
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
#define END 272
#define UMINUS 273
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    1,    3,    3,    2,    2,    2,
    6,    6,    5,    5,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    7,    7,    7,    7,    7,
    7,
};
short yylen[] = {                                         2,
    1,   11,    8,    2,    3,    8,   11,    0,    3,    1,
    1,    1,    3,    1,    3,    3,    3,    3,    3,    3,
    2,    1,    1,    2,    2,    1,    1,    1,    1,    1,
    1,
};
short yydefred[] = {                                      0,
    0,    0,   23,    0,    0,    0,    1,    0,    0,   24,
   25,    0,   21,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   15,   20,    0,    0,   18,   19,    5,    0,
   29,   26,   30,   28,   27,   31,    0,   11,   12,    0,
    0,    0,    9,    0,    0,    0,    0,    3,    0,    0,
    0,    0,    0,    2,    0,    0,    0,    0,    6,    0,
    0,    7,
};
short yydgoto[] = {                                       6,
    7,   20,   48,    8,   22,   40,   37,
};
short yysindex[] = {                                    -40,
  -22,  -60,    0,  -38,  -38,    0,    0,  -33,  -38,    0,
    0,  -38,    0,   26,  -38,  -38,  -38,  -38,  -40,  -17,
    2, -238,    0,    0,  -34,  -34,    0,    0,    0,  -95,
    0,    0,    0,    0,    0,    0,  -38,    0,    0,  -38,
  -40,   34,    0,  -93, -228,   -4,  -85,    0,  -38,  -40,
    1,  -79,  -75,    0,  -40,  -73, -218,  -69,    0,  -40,
  -68,    0,
};
short yyrindex[] = {                                      0,
    0,  -26,    0,    0,    0,    0,    0,    0,   18,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    3,    0,
  -37,   19,    0,    0,  -16,   -6,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   18,
    0,  -35,    0,    0,    0,    0,    0,    0,   18,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
short yygindex[] = {                                      0,
   15,  -29,    9,   46,    0,    0,    0,
};
#define YYTABLESIZE 271
short yytable[] = {                                       5,
   12,    5,    4,   14,    4,   13,    4,   17,   17,   15,
   43,   16,   18,   18,   22,   22,   22,    9,   22,   51,
   22,   38,   39,   30,   16,   19,   16,   41,   16,   46,
   47,   45,   22,   29,   17,   49,   17,   50,   17,   46,
   58,   53,   16,   17,   15,   54,   16,   55,   18,   13,
   14,   57,   17,   60,   21,   44,   62,   23,    8,   10,
   25,   26,   27,   28,   52,   59,   24,   17,   15,   56,
   16,    0,   18,    0,   61,   17,   15,    0,   16,    0,
   18,    0,   42,    0,    0,   21,    0,    0,    0,    0,
    0,    0,    0,    0,   21,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   10,   11,    0,    0,
    0,    0,    0,    0,    0,    0,    1,    0,    0,    0,
    0,    0,   14,   14,   13,   13,    0,    0,    0,    2,
    3,    2,    3,   22,   22,   22,   22,   22,   22,   22,
    0,    0,   22,   16,   16,   16,   16,   16,   16,   16,
    0,    0,   16,   17,   17,   17,   17,   17,   17,   17,
    0,    0,   17,   31,   32,   33,   34,   35,    0,    0,
   36,
};
short yycheck[] = {                                      40,
   61,   40,    0,   41,   45,   41,   45,   42,   42,   43,
   40,   45,   47,   47,   41,   42,   43,   40,   45,   49,
   47,  260,  261,   41,   41,   59,   43,  123,   45,  258,
  259,  125,   59,   19,   41,   40,   43,  123,   45,  258,
  259,   41,   59,   42,   43,  125,   45,  123,   47,    4,
    5,  125,   59,  123,    9,   41,  125,   12,   41,   41,
   15,   16,   17,   18,   50,   57,   41,   42,   43,   55,
   45,   -1,   47,   -1,   60,   42,   43,   -1,   45,   -1,
   47,   -1,   37,   -1,   -1,   40,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   49,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,
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
#define YYFINAL 6
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
0,0,0,"IF","ELSEIF","ELSE","AND","OR","LE","GE","GT","LT","NE","INC","DEC","EQ",
"ALP","NUM","END","UMINUS",
};
char *yyrule[] = {
"$accept : START",
"START : ST",
"ST : IF '(' COND ')' '{' ST '}' ELSE '{' ST '}'",
"ST : IF '(' COND ')' '{' ST '}' SE",
"ST : EXP ';'",
"ST : EXP ';' ST",
"SE : ELSEIF '(' COND ')' '{' ST '}' SE",
"SE : ELSEIF '(' COND ')' '{' ST '}' ELSE '{' ST '}'",
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
#line 69 "f04.y"

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
#line 262 "y.tab.c"
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
#line 23 "f04.y"
{ printf("CORRECT IF-ELSEIF-ELSE BLOCK\n"); 
      		exit (EXIT_SUCCESS);
	}
break;
#line 449 "y.tab.c"
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
