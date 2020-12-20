%{
#include <stdio.h>
#include <stdlib.h>
extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);
%}

%token FOR AND OR LE GE GT LT NE INC DEC EQ ALP NUM END
%left '+''-'
%left '*''/'
%right '='
%nonassoc UMINUS
%nonassoc IF
%nonassoc ELSE
%left GE NE LT GT LE EQ
%left AND OR

%%

START : ST { printf("CORRECT FOR LOOP\n"); 
      		exit (EXIT_SUCCESS);
	}
;
ST : FOR '('EXPX ';' COND ';' EXPX  ')' '{' BODY '}'
;

EXPX : EXP 
     | 
;

BODY: ST BODY
    | EXP ';' BODY
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
   | EXP '+''=' EXP
   | EXP '-''=' EXP
   | EXP '*''=' EXP
   | EXP '/''=' EXP
   | '('EXP')'
   |'-' EXP %prec UMINUS
   | ALP
   | NUM
   | ALP INC
   | ALP DEC
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
