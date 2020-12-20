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

typedef struct var_data{
	char symbol;
	int is_Array;
	struct var_data* link;
} Var_Data;

typedef struct symbol_data{
	int type;
	int is_Array;
	char struct_symbol;
	struct symbol_data **link;	
}Symbol_Data;

Var_Data *top = NULL;
Symbol_Data *symbol_table[26];
Symbol_Data *struct_symbol_table[26];

void set_variable_tail(char symbol, int isArray);
void set_symbol_table(Symbol_Data* symbol_table[], Var_Data *top, int type);
void set_struct_node(char struct_symbol);
char* type_convert(int type);
int max(int x, int y);
int min(int x, int y);
void clear_memory();

Symbol_Data **temp_table = NULL;

#line 41 "f01.y"
typedef union { char symbol; int type; } YYSTYPE;
#line 63 "y.tab.c"
#define CHAR 257
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define SYM 261
#define STRUCT 262
#define INDEX 263
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    5,    5,    5,    5,    5,    7,    6,   10,   10,
   12,   11,   11,   11,   11,    2,    2,    2,    2,    8,
    9,    3,    3,    4,    4,    1,    1,    1,    1,
};
short yylen[] = {                                         2,
    1,    2,    2,    2,    2,    0,    6,    2,    2,    0,
    2,    2,    3,    5,    6,    1,    1,    1,    1,    2,
    4,    3,    1,    3,    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
   16,   17,   18,   19,    0,    0,    0,    0,   25,    0,
    1,    0,    0,    0,    0,    0,    0,   20,    0,    8,
   26,   27,   28,   29,    0,    0,    2,    3,    4,    5,
   12,    0,    0,   22,    0,    0,    0,   24,   13,    0,
    0,    0,    0,   21,    0,   11,    0,    9,   14,    0,
    7,   15,
};
short yydgoto[] = {                                       7,
   26,    8,    9,   10,   11,   12,   13,   14,   15,   42,
   18,   43,
};
short yysindex[] = {                                   -208,
    0,    0,    0,    0,  -46, -254,    0, -250,    0,  -33,
    0, -208, -208, -208, -208,  -43, -244,    0,  -87,    0,
    0,    0,    0,    0, -223, -223,    0,    0,    0,    0,
    0, -250, -224,    0, -226,   -4,  -18,    0,    0,  -53,
 -250,  -82, -226,    0,  -29,    0,  -14,    0,    0, -250,
    0,    0,
};
short yyrindex[] = {                                     46,
    0,    0,    0,    0,  -24,    0,    0,    0,    0,    0,
    0,   46,   46,   46,   46,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -78,  -39,    0,    0,    0,    0,
    0,    0,  -78,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
short yygindex[] = {                                      0,
    0,  -30,   33,   35,   43,    0,    0,    0,    0,   18,
   -6,    0,
};
#define YYTABLESIZE 215
short yytable[] = {                                      17,
   32,   20,   23,   23,   41,   23,   19,   23,   24,   21,
   16,   22,   41,   23,   50,   31,   34,   23,   23,   23,
   23,   23,   23,   24,   21,   39,   22,   25,   23,   49,
    1,    2,    3,    4,   46,   35,   23,   36,   40,   45,
   44,   17,   47,   52,   51,    6,   10,   33,    1,    2,
    3,    4,    5,    6,   27,   28,   29,   30,   38,   37,
   48,    0,    0,    0,    0,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   16,
};
short yycheck[] = {                                      46,
   44,    8,   42,   43,   35,   45,  261,   47,   42,   43,
  261,   45,   43,   47,   44,   59,  261,   42,   43,   59,
   45,   61,   47,   42,   43,   32,   45,   61,   47,   59,
  257,  258,  259,  260,   41,  123,   61,  261,  263,   93,
   59,   46,  125,   50,   59,    0,  125,   91,  257,  258,
  259,  260,  261,  262,   12,   13,   14,   15,   26,   25,
   43,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  261,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 263
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",
0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,"CHAR","INT","FLOAT","DOUBLE","SYM","STRUCT","INDEX",
};
char *yyrule[] = {
"$accept : START",
"START : ST",
"ST : INIT ST",
"ST : STRUCTURE ST",
"ST : STRUCTURE_INIT ST",
"ST : ASSIGN ST",
"ST :",
"STRUCTURE : STRUCT SYM '{' ST2 '}' ';'",
"INIT : TYPE VAR",
"ST2 : INIT2 ST2",
"ST2 :",
"INIT2 : TYPE VAR",
"VAR : SYM ';'",
"VAR : SYM ',' VAR",
"VAR : SYM '[' INDEX ']' ';'",
"VAR : SYM '[' INDEX ']' ',' VAR",
"TYPE : CHAR",
"TYPE : INT",
"TYPE : FLOAT",
"TYPE : DOUBLE",
"STRUCTURE_INIT : SYM VAR",
"ASSIGN : SYMX2 '=' SYMX2 ';'",
"SYMX : SYM '.' SYM",
"SYMX : SYM",
"SYMX2 : SYMX2 OP SYMX",
"SYMX2 : SYMX",
"OP : '+'",
"OP : '-'",
"OP : '/'",
"OP : '*'",
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
#line 251 "f01.y"

void set_variable_tail(char symbol, int is_Array){
	Var_Data* ptr = (Var_Data*)malloc(sizeof(Var_Data));
	ptr->symbol = symbol;
	ptr->is_Array = is_Array;
	ptr->link = NULL;
	if(top==NULL){
		top = ptr;
	}
	else{
		ptr->link = top;
		top = ptr;
	}
}

void set_symbol_table(Symbol_Data* symbol_table[], Var_Data *top, int type){
	if(type>=1 && type<=4){
		Var_Data *ptr = top, *temp = NULL;
		int index;
		while(ptr!=NULL){
			symbol_table[(index = ptr->symbol-'a')] = (Symbol_Data*)malloc(sizeof(Symbol_Data));
			symbol_table[index]->type = type;
			symbol_table[index]->is_Array = ptr->is_Array;
			symbol_table[index]->struct_symbol = 0;
			symbol_table[index]->link = NULL;
			temp = ptr;
			ptr = ptr->link;
			free(temp);
		}
	}else if(type==5){
		
	}else{
		printf("unknown type\n");
		exit(EXIT_FAILURE);
	}

}

void set_struct_node(char struct_symbol){
	int index;
	struct_symbol_table[(index = struct_symbol-'a')] = (Symbol_Data*)malloc(sizeof(Symbol_Data));
	struct_symbol_table[index]->type = 5;
	struct_symbol_table[index]->is_Array = 0;
	struct_symbol_table[index]->struct_symbol = struct_symbol;
}

int max(int x, int y){
	if(x>y){
		return x;
	}
	return y;
}

int min(int x, int y){
	if(x<y){
		return x;
	}
	return y;
}

char* type_convert(int type){
	char *data;
	switch(type){
		case 1 : data = "char";
			 break;
		case 2 : data = "int";
			 break;
		case 3 : data = "float";
			 break;
		case 4 : data = "double";
			 break;
		case 5 : data = "struct";
			 break;
		case 11 : data = "char-array";
			 break;
		case 12 : data = "int-array";
			 break;
		case 13 : data = "float-array";
			break;
		case 14 : data = "double-array";
			break;
		default : data = "unknown type";
			break;

	}
	return data;
}

void clear_memory(){
	Symbol_Data **ptr = NULL;
	int i;
	for(i=0; i<26; i++){
		if(symbol_table[i]!=NULL){
			free(symbol_table[i]);
			symbol_table[i] = NULL;
		}
		if(struct_symbol_table[i]!=NULL){
			ptr = struct_symbol_table[i]->link;
			free(struct_symbol_table[i]);
			struct_symbol_table[i] = NULL;
		}
		if(ptr!=NULL){
			int j;
			for(j=0; j<26; j++){
				if(ptr[j]!=NULL){
					free(ptr[j]);
					ptr[j] = NULL;
				}
			}
			free(ptr);
			ptr = NULL;
		}	
		
	}
}

int yywrap(){
	return 1;
}

int main(){
	
	
	yyparse();
	
	clear_memory();

	return 0;
}

int yyerror(char* msg){
        printf("FAILURE\n");
        printf("ERROR MESSAGE : %s\nLINE # : %d\nyytext : %s\n", msg, yylineno, yytext);
        exit (EXIT_FAILURE);
        return 0;
}
#line 382 "y.tab.c"
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
#line 49 "f01.y"
{printf("PASSED SUCCESSFULLY\n");
      	    exit (EXIT_SUCCESS);
	}
break;
case 7:
#line 60 "f01.y"
{     set_struct_node(yyvsp[-4].symbol); 
					     struct_symbol_table[yyvsp[-4].symbol-'a']->link = temp_table;  
					     temp_table = NULL;
					    
				       }
break;
case 8:
#line 67 "f01.y"
{ set_symbol_table(symbol_table, top, yyvsp[-1].type); top = NULL; }
break;
case 10:
#line 72 "f01.y"
{ if(temp_table==NULL){ 
		temp_table = (Symbol_Data**)calloc(26, sizeof(Symbol_Data*));
	 } 
       }
break;
case 11:
#line 78 "f01.y"
{ if(temp_table==NULL){
                                        temp_table = (Symbol_Data**)calloc(26, sizeof(Symbol_Data*));
                                      }
                      set_symbol_table(temp_table, top, yyvsp[-1].type);
                      top = NULL;
                 }
break;
case 12:
#line 85 "f01.y"
{ set_variable_tail(yyvsp[-1].symbol, 0); }
break;
case 13:
#line 86 "f01.y"
{ set_variable_tail(yyvsp[-2].symbol, 0); }
break;
case 14:
#line 87 "f01.y"
{ set_variable_tail(yyvsp[-4].symbol, 1); }
break;
case 15:
#line 88 "f01.y"
{ set_variable_tail(yyvsp[-5].symbol, 1); }
break;
case 16:
#line 91 "f01.y"
{yyval.type = 1;}
break;
case 17:
#line 92 "f01.y"
{yyval.type = 2;}
break;
case 18:
#line 93 "f01.y"
{yyval.type = 3;}
break;
case 19:
#line 94 "f01.y"
{yyval.type = 4;}
break;
case 20:
#line 97 "f01.y"
{ 
		     			
		     			if(struct_symbol_table[yyvsp[-1].symbol-'a']==NULL){
      						printf("struct of type %c has not been defined so declaration is not possible\n", yyvsp[-1].symbol);	
						yyerror("struct error");
						exit(EXIT_FAILURE);	
					}else{
						Symbol_Data *ptr;
						Var_Data *ptr2;
						while(top!=NULL){
							ptr = (Symbol_Data*)malloc(sizeof(Symbol_Data));
							ptr->type = 5;
							ptr->is_Array = top->is_Array;
							ptr->struct_symbol = yyvsp[-1].symbol;
							ptr->link = struct_symbol_table;
							symbol_table[top->symbol-'a'] = ptr;
							ptr2 = top;
							top = top->link;
							free(ptr2);
						}
						
					}
					
				}
break;
case 21:
#line 123 "f01.y"
{ 
      				if(yyvsp[-3].type>=1 && yyvsp[-3].type<=4 && yyvsp[-1].type>=1 && yyvsp[-1].type<=4){
       					if(yyvsp[-3].type > yyvsp[-1].type){
						printf("implicit type conversion in assignment operator from %s to %s in line_no : %d\n", type_convert(yyvsp[-1].type), type_convert(yyvsp[-3].type), yylineno);
					}else if(yyvsp[-1].type > yyvsp[-3].type){
						printf("explicit type conversion in assignment operator from %s to %s in line_no : %d\n", type_convert(yyvsp[-1].type), type_convert(yyvsp[-3].type), yylineno);	
					}else{
						
					}
				}else if(yyvsp[-3].type==yyvsp[-1].type){
				
				}else{
					char *string_a = type_convert(yyvsp[-3].type), *string_b = type_convert(yyvsp[-1].type);
					int alloc_a = 0, alloc_b = 0;
					if(strcmp(string_a, "unknown type")==0){
						if(yyvsp[-3].type>=(int)'a' &&  yyvsp[-3].type<=(int)'z'){
							alloc_a = 1;
							string_a = (char*)calloc(20, sizeof(char));
							strcpy(string_a, "struct-");
							string_a[strlen(string_a)] = (char)yyvsp[-3].type;
							
						}else if(yyvsp[-3].type>=(int)'a'+100 &&  yyvsp[-3].type<=(int)'z'+100){
                                                        alloc_a = 1;
							string_a = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_a, "struct-array-");
							yyvsp[-3].type-=100;
                                                        string_a[strlen(string_a)] = (char)yyvsp[-3].type;
                                                }

					}
					if(strcmp(string_b, "unknown type")==0){
                                                alloc_b = 1;
						if(yyvsp[-1].type>=(int)'a' &&  yyvsp[-1].type<=(int)'z'){
                                                        alloc_b = 1;
							string_b = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_b, "struct-");
                                                        string_b[strlen(string_b)] = (char)yyvsp[-1].type;
						
                                                }else if(yyvsp[-1].type>=(int)'a'+100 &&  yyvsp[-1].type<=(int)'z'+100){
                                                        alloc_b = 1;
							string_b = (char*)calloc(20, sizeof(char));
                                                        strcpy(string_b, "struct-array-");
                                                        yyvsp[-1].type-=100;
                                                        string_a[strlen(string_a)] = (char)yyvsp[-1].type;
                                                }
                                        }
					
					printf("type conversion from %s to %s cannot be done\n", string_b, string_a);
					if(alloc_a==1){ free(string_a); }
                                        if(alloc_b==1){ free(string_b); }
					yyerror("incorrect assignment");
				}

			}
break;
case 22:
#line 180 "f01.y"
{   	
     			
			if(symbol_table[yyvsp[-2].symbol-'a']==NULL){
                        	printf("symbol %c does not exist\n", yyvsp[-2].symbol);
                        	yyerror("symbol error");
                	}
                	else{  
 				
                        	if(symbol_table[yyvsp[-2].symbol-'a']->type!=5){
					printf("you cannot use a dot operator with non-struct\n");
					yyerror("invalid operation");
				}else{	
					char struct_code = symbol_table[yyvsp[-2].symbol-'a']->struct_symbol;
					if(struct_symbol_table[(int)struct_code-(int)'a']==NULL){
						printf("struct %c does not exist\n", struct_code);
						yyerror("struct error");
					}else if((struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)yyvsp[0].symbol-'a']==NULL){
						printf("%c in struct %c does not exist\n", yyvsp[0].symbol, struct_code);
						yyerror("struct error");
					}else{
						yyval.type = (struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)yyvsp[0].symbol-'a']->type;
						if((struct_symbol_table[(int)struct_code-(int)'a']->link)[(int)yyvsp[0].symbol-'a']->is_Array == 1){
							yyval.type+=10;
						}
					}

				}

                	}
		   }
break;
case 23:
#line 210 "f01.y"
{    if(symbol_table[yyvsp[0].symbol-'a']==NULL){
			printf("symbol %c does not exist in line_no : %d\n", yyvsp[0].symbol, yylineno);
			yyerror("symbol error");
		}
		else{
			if(symbol_table[yyvsp[0].symbol-'a']->type==5){
				yyval.type = (int)symbol_table[yyvsp[0].symbol-'a']->struct_symbol;
				if(symbol_table[yyvsp[0].symbol-'a']->is_Array==1){
					yyval.type+=100;
				}
			}else{
				yyval.type = symbol_table[yyvsp[0].symbol-'a']->type;
				if(symbol_table[yyvsp[0].symbol-'a']->is_Array==1){
					yyval.type+=10;
				}
			}
		}
	   }
break;
case 24:
#line 230 "f01.y"
{ 
      				if(yyvsp[-2].type>=5 || yyvsp[0].type>=5){
					printf("operation %c not possible in struct\n", yyvsp[-1].symbol);
					yyerror("struct operation");
				}
      				if(yyvsp[-2].type != yyvsp[0].type){
					printf("Implicit conversion from %s to %s in operator %c line no : %d\n", type_convert(min(yyvsp[-2].type, yyvsp[0].type)), type_convert(max(yyvsp[-2].type, yyvsp[0].type)), yyvsp[-1].symbol, yylineno);		
				}
				yyval.type = max(yyvsp[-2].type, yyvsp[0].type);
		     }
break;
case 25:
#line 240 "f01.y"
{ yyval.type = yyvsp[0].type; }
break;
case 26:
#line 243 "f01.y"
{ yyval.symbol = '+'; }
break;
case 27:
#line 244 "f01.y"
{ yyval.symbol = '-'; }
break;
case 28:
#line 245 "f01.y"
{ yyval.symbol = '/'; }
break;
case 29:
#line 246 "f01.y"
{ yyval.symbol = '*'; }
break;
#line 800 "y.tab.c"
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
