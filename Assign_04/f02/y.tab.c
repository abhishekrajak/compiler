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
#line 2 "f02.y"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
extern FILE *yyout;
int tab = 0;
char* decode_REL(int type);
void display_tab();
#line 16 "f02.y"
typedef union { char symbol[20]; int value; } YYSTYPE;
#line 38 "y.tab.c"
#define FOR 257
#define VALUE 258
#define ID 259
#define LT 260
#define LE 261
#define GT 262
#define GE 263
#define NE 264
#define INC 265
#define DEC 266
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    3,    5,    5,    5,    4,    1,    1,    1,    1,
    1,    2,    2,    6,    6,
};
short yylen[] = {                                         2,
    1,    9,    2,    2,    0,    8,    1,    1,    1,    1,
    1,    1,    1,    4,    4,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,   12,
   13,    0,    0,    0,    0,    0,    7,    9,    8,   10,
   11,    0,    0,    0,    0,    0,    0,    0,    4,    2,
    3,    6,    0,    0,   15,   14,
};
short yydgoto[] = {                                       2,
   22,   12,   24,    6,   25,   26,
};
short yysindex[] = {                                   -244,
  -26,    0,    0, -243,  -46, -242, -240, -256,  -40,    0,
    0,  -21, -238, -101, -260, -252,    0,    0,    0,    0,
    0, -235,  -37, -252, -100, -252,  -33, -247,    0,    0,
    0,    0,  -32,  -31,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -96,    0,    0,    0,    0,
    0,    0,    0,  -96,    0,  -96,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,   30,    0,  -18,    0,
};
#define YYTABLESIZE 30
short yytable[] = {                                      17,
   18,   19,   20,   21,    1,   29,   23,   31,   10,   11,
   33,   34,    1,    4,    7,    5,    8,    9,   13,   14,
   15,   16,   27,   28,   30,   32,   35,   36,    5,    3,
};
short yycheck[] = {                                     260,
  261,  262,  263,  264,  257,   24,  259,   26,  265,  266,
  258,  259,  257,   40,   61,  259,  259,  258,   59,   41,
  259,  123,  258,   61,  125,   59,   59,   59,  125,    0,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 266
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FOR",
"VALUE","ID","LT","LE","GT","GE","NE","INC","DEC",
};
char *yyrule[] = {
"$accept : STR",
"STR : FOR_LOOP",
"FOR_LOOP : FOR '(' AB ID OP ')' '{' STR2 '}'",
"STR2 : STATEMENT STR2",
"STR2 : FOR_LOOP STR2",
"STR2 :",
"AB : ID '=' VALUE ';' ID REL VALUE ';'",
"REL : LT",
"REL : GT",
"REL : LE",
"REL : GE",
"REL : NE",
"OP : INC",
"OP : DEC",
"STATEMENT : ID '=' ID ';'",
"STATEMENT : ID '=' VALUE ';'",
};
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
#line 67 "f02.y"
char* decode_REL(int type){
	char *ptr = NULL;
	switch(type){
		case 1 : ptr = "<";
			 break;
		case 2 : ptr = ">";
			 break;
		case 3 : ptr = "<=";
			 break;
		case 4 : ptr = ">=";
			 break;
		case 5 : ptr = "!=";
			 break;
		case 6 : ptr = "++";
			 break;
		case 7 : ptr = "--";
			 break;
		default : ptr = "unknown op.";
			 break;
	}
	return ptr;
}
void display_tab(){
	int i;
        for(i=0; i<tab; i++){
                fprintf(yyout, "%c", '\t');
        }
}
int yywrap(){
	return 1;
}
int main(){
	
	yyparse();
	
	return 0;
}
int yyerror(char* msg){
	fprintf(yyout, "//%s\tLINE # : %d\n", msg, yylineno);
        exit (EXIT_FAILURE);
        return 0;
}

#line 205 "y.tab.c"
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
case 2:
#line 23 "f02.y"
{
		display_tab();
                fprintf(yyout, "%s%s%s", yyvsp[-5].symbol, decode_REL(yyvsp[-4].value), ";\n");
		tab--;
		display_tab();
		fprintf(yyout, "%s", "}\n"); 
		 
	 }
break;
case 6:
#line 37 "f02.y"
{
		display_tab();
   		fprintf(yyout, "%s %c %d%s", yyvsp[-7].symbol, '=', yyvsp[-5].value, ";\n");	
		display_tab();
		fprintf(yyout, "%s %s %s %d %s", "while(", yyvsp[-3].symbol, decode_REL(yyvsp[-2].value), yyvsp[-1].value,")\n");
		display_tab();
		fprintf(yyout, "%s", "{\n");
		tab++;
	}
break;
case 7:
#line 47 "f02.y"
{ yyval.value = 1; }
break;
case 8:
#line 48 "f02.y"
{ yyval.value = 2; }
break;
case 9:
#line 49 "f02.y"
{ yyval.value = 3; }
break;
case 10:
#line 50 "f02.y"
{ yyval.value = 4; }
break;
case 11:
#line 51 "f02.y"
{ yyval.value = 5; }
break;
case 12:
#line 53 "f02.y"
{ yyval.value = 6; }
break;
case 13:
#line 54 "f02.y"
{ yyval.value = 7; }
break;
case 14:
#line 56 "f02.y"
{ 
	  			display_tab();
				fprintf(yyout, "%s %c %s%s", yyvsp[-3].symbol, '=', yyvsp[-1].symbol, ";\n"); 
			  }
break;
case 15:
#line 61 "f02.y"
{ 
				display_tab();	
				fprintf(yyout, "%s %c %d%s", yyvsp[-3].symbol, '=', yyvsp[-1].value, ";\n"); 
			  }
break;
#line 451 "y.tab.c"
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
