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
#line 2 "f01.y"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
extern FILE *yyout;
extern char buffer[100];
typedef struct symbol_data{
	char symbol;
	struct symbol_data *link;
} Symbol_Data;
typedef struct index_data{
	int index;
	struct index_data *link;
} Index_Data;
Symbol_Data *symbol_head = NULL, *symbol_tail = NULL, *symbol_hold = NULL;
Index_Data *index_head = NULL, *index_tail = NULL, *index_hold = NULL;
int is_Singular = 1, is_Array = 0, is_tab = 0;
void reset();
Symbol_Data *set_symbol(char symbol);
Index_Data *set_index(int index);
#line 28 "f01.y"
typedef union { char symbol; int type; char* symbol_ptr;} YYSTYPE;
#line 50 "y.tab.c"
#define VAR 257
#define CHARACTER 258
#define INTEGER 259
#define RECORD 260
#define BEGINX 261
#define END 262
#define INDEX 263
#define SYM 264
#define SYM_LONG 265
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    4,    4,    4,    5,    7,    7,    1,    1,    8,
    8,    2,    2,    3,    6,    9,   10,   11,   11,
};
short yylen[] = {                                         2,
    1,    2,    2,    0,    5,    1,    3,    1,    1,    3,
    0,    1,    3,    4,    5,    3,    2,    2,    0,
};
short yydefred[] = {                                      0,
    6,    0,    0,    1,    0,    0,    0,    0,    0,    2,
    3,    0,    0,    0,    0,   16,    8,    9,    0,    7,
   17,    0,    0,    0,    0,   18,    0,    0,    0,   12,
    5,   15,    0,    0,   10,    0,   13,   14,
};
short yydgoto[] = {                                       3,
   19,   29,   30,    4,    5,    6,    7,   25,    8,   15,
   23,
};
short yysindex[] = {                                   -261,
    0,  -48,    0,    0, -261, -261,  -43, -250, -248,    0,
    0, -253, -251,  -42, -247,    0,    0,    0,  -77,    0,
    0, -247, -244, -243,  -40,    0,  -38,  -24,  -44,    0,
    0,    0,  -23, -243,    0, -239,    0,    0,
};
short yyrindex[] = {                                     25,
    0,    0,    0,    0,   25,   25,    0,    0,    0,    0,
    0,    0,    0,    0, -236,    0,    0,    0,  -32,    0,
    0, -236,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,   -6,    2,  -13,    0,    0,    0,    0,    0,
    7,
};
#define YYTABLESIZE 49
short yytable[] = {                                      34,
   13,   22,    1,    2,   17,   18,   10,   11,   22,    9,
   14,   16,   20,   24,   12,   21,    1,   27,   31,   28,
   32,   33,   36,   38,    4,   19,   11,   37,   26,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   35,
};
short yycheck[] = {                                      44,
   44,   15,  264,  265,  258,  259,    5,    6,   22,   58,
  261,  260,  264,   91,   58,   58,  264,  262,   59,  263,
   59,   46,   46,  263,    0,  262,   59,   34,   22,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   93,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 265
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"','",0,"'.'",0,0,0,0,0,0,0,0,0,0,0,"':'","';'",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"VAR",
"CHARACTER","INTEGER","RECORD","BEGINX","END","INDEX","SYM","SYM_LONG",
};
char *yyrule[] = {
"$accept : STR1",
"STR1 : STR2",
"STR2 : STR3 STR2",
"STR2 : STR4 STR2",
"STR2 :",
"STR3 : VARS ':' TYPE IS_ARRAY ';'",
"VARS : SYM",
"VARS : VARS ',' SYM",
"TYPE : CHARACTER",
"TYPE : INTEGER",
"IS_ARRAY : '[' INDEXES ']'",
"IS_ARRAY :",
"INDEXES : INDEX_SYM",
"INDEXES : INDEXES ',' INDEX_SYM",
"INDEX_SYM : INDEX '.' '.' INDEX",
"STR4 : STR5 STR6 STR7 END ';'",
"STR5 : SYM_LONG ':' RECORD",
"STR6 : BEGINX ':'",
"STR7 : STR3 STR7",
"STR7 :",
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
#line 178 "f01.y"
void reset(){
	symbol_head = symbol_tail = symbol_hold = NULL;
	index_head = index_tail = index_hold = NULL;
	is_Singular = 1, is_Array = 0;
}
Symbol_Data *set_symbol(char symbol){
	Symbol_Data *ptr = (Symbol_Data*)malloc(sizeof(Symbol_Data));
	ptr->symbol = symbol;
	ptr->link = NULL;
	return ptr;
}
Index_Data *set_index(int index){
	Index_Data *ptr = (Index_Data*)malloc(sizeof(Index_Data));
	ptr->index = index;
	ptr->link = NULL;
	return ptr;
}
int yywrap(){
	return 1;
}
int main(){
	
	yyparse();
	
	return 0;
}
int yyerror(char* msg){
	reset();
        printf("//%s\tLINE # : %d\n", msg, yylineno);
        exit (EXIT_FAILURE);
        return 0;
}

#line 216 "y.tab.c"
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
#line 33 "f01.y"
{ exit(EXIT_SUCCESS); }
break;
case 5:
#line 40 "f01.y"
{
			if(is_Array==1 && is_Singular==0){
				fprintf(yyout, "%s", " syntax error multiple array declared in single line \0");
				yyerror(" syntax error multiple array declared in single line \0");
			}else{
				if(is_tab==1){
					fprintf(yyout, "%c", '\t');
				}
				if(yyvsp[-2].type==1){
					fprintf(yyout, "%s", "char ");
				}else if(yyvsp[-2].type==2){
					fprintf(yyout, "%s", "int ");
				}else{
					yyerror(" unknown type");
				}
				
			}
			if(is_Array==0){
				if(symbol_hold!=NULL){
					fprintf(yyout, "%c", symbol_hold->symbol);
					if(symbol_head!=NULL){
						fprintf(yyout, "%c", ',');
					}
					free(symbol_hold);
					symbol_hold = NULL;
				}else{
					yyerror(" no var name given");
				}
				Symbol_Data *ptr = symbol_head, *ptr2;
				while(ptr!=NULL){
					fprintf(yyout, "%c", ptr->symbol);
					ptr2 = ptr;
					ptr = ptr->link;
					if(ptr!=NULL){
						fprintf(yyout, "%c", ',');
					}
					free(ptr2);
				}
				symbol_head = symbol_tail = NULL;
			}else{
				if(symbol_hold!=NULL){
					fprintf(yyout, "%c", symbol_hold->symbol);
					free(symbol_hold);
					symbol_hold = NULL;
				}else{
					yyerror(" no var name given");
				}
				if(index_hold!=NULL){
					fprintf(yyout, "%c", '[');
                                        fprintf(yyout, "%d", index_hold->index);
                                        fprintf(yyout, "%c", ']');
					free(index_hold);
					index_hold = NULL;
				}else{
					yyerror(" index error");
				}
				Index_Data *ptr = index_head, *ptr2;
				while(ptr!=NULL){
					fprintf(yyout, "%c", '[');
					fprintf(yyout, "%d", ptr->index);
					fprintf(yyout, "%c", ']');
					ptr2 = ptr;
					ptr = ptr->link;
					free(ptr2);
				}		
				index_head = index_tail = NULL;		
			}
			fprintf(yyout, "%s", ";\n");		
			reset();
		}
break;
case 6:
#line 112 "f01.y"
{ 
			symbol_hold = set_symbol(yyvsp[0].symbol);		
		}
break;
case 7:
#line 117 "f01.y"
{
			Symbol_Data *ptr = set_symbol(yyvsp[0].symbol);
			if(symbol_head==NULL || symbol_tail==NULL){
				symbol_head = symbol_tail = ptr;
			}else{
				symbol_tail->link = ptr;
				symbol_tail = ptr;
			}
			is_Singular = 0;
		}
break;
case 8:
#line 128 "f01.y"
{ yyval.type = 1; }
break;
case 9:
#line 129 "f01.y"
{ yyval.type = 2;  }
break;
case 10:
#line 131 "f01.y"
{ is_Array = 1; }
break;
case 11:
#line 132 "f01.y"
{ is_Array = 0; }
break;
case 12:
#line 135 "f01.y"
{
			index_hold = set_index(yyvsp[0].type);
		}
break;
case 13:
#line 139 "f01.y"
{
			Index_Data *ptr = set_index(yyvsp[0].type);
			if(index_head==NULL || index_tail==NULL){
				index_head = index_tail = ptr;
			}else{
				index_tail->link = ptr;
				index_tail = ptr;
			}
		}
break;
case 14:
#line 150 "f01.y"
{ 
			if(yyvsp[-3].type!=0 || yyvsp[0].type<=yyvsp[-3].type){
				yyerror(" invalid index");	
			}else{ 
				yyval.type = yyvsp[0].type;				
			}
		}
break;
case 15:
#line 159 "f01.y"
{ 
		fprintf(yyout, "%s", "} ");
		fprintf(yyout, "%s", buffer);
		fprintf(yyout, "%s", ";\n");
		is_tab = 0;
	}
break;
case 16:
#line 167 "f01.y"
{ 
		fprintf(yyout, "%s", "struct \n{\n"); 
		is_tab = 1;
	}
break;
#line 553 "y.tab.c"
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
