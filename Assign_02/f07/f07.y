%{
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
%}
%token MAIN IF ELSEIF ELSE FOR WHILE DO READ PRINT INT FLOAT AND OR LE GE GT LT NE INC DEC EQ ALP NUM INC_BY DEC_BY MUL_BY DIV_BY
%left '+''-'
%left '*''/'
%right '='
%nonassoc UMINUS
%nonassoc IF 
%nonassoc ELSEIF 
%nonassoc ELSE
%left GE NE LT GT LE EQ 
%left AND OR
%right INC_BY DEC_BY MUL_BY DIV_BY
%%
START : TYPE MAIN '(' ')' '{' CY '}' { printf("PASS\n"); 
      		exit (EXIT_SUCCESS);
	}
;
CY : TYPE_COMPULSORY ALP INIT ';' CY
   | EXP ';' CY 
   | IF_X CY
   | FOR_X CY
   | WHILE_X CY
   | DO_WHILE CY
   | READ '(' DATA ')' ';' CY
   | PRINT '(' DATA ')' ';' CY
   | 
;
DATA: ALP
    | NUM
;
IF_X:IF '('COND')' FUNC
   | IF '('COND')' FUNC IF_Y 
   | IF '('COND')' FUNC IF_Z
;
IF_Y :ELSEIF '('COND')' FUNC IF_Y  
   |  ELSEIF '('COND')' FUNC IF_Z
;
IF_Z: ELSE FUNC
;
FUNC: '{' CY '}' 
    | CY
;
FOR_X : FOR '('EXP ';' COND ';' EXP  ')' FUNC
;
WHILE_X : WHILE '(' COND ')' FUNC
;
DO_WHILE : DO '{' CY '}' WHILE '(' COND ')' ';'
;
INIT: '=' NUM
    | '=' ALP
    | 
;
TYPE_COMPULSORY: INT
	       | FLOAT
;
TYPE: INT 
   |  FLOAT
   | 
;
COND: | X LOGIC_OPERATOR COND
      | X
;
LOGIC_OPERATOR: AND
  | OR
;
X: EXP RELATION_COMP EXP
 | EXP
;
EXP: ALP '=' EXP
   | EXP '+' EXP
   | EXP '-' EXP
   | EXP '*' EXP
   | EXP '/' EXP
   | '('EXP')'
   |'-' EXP %prec UMINUS
   | ALP OP
   | ALP OP2 EXP
   | NUM 
;
OP2: INC_BY
   | DEC_BY
   | MUL_BY
   | DIV_BY 
;
OP: INC
  | DEC 
  | 
;
RELATION_COMP: GE 
	     | NE 
	     | LT 
	     | LE 
	     | GT 
	     | EQ
;
%%
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

