%{
#include <stdio.h>
#include <stdlib.h>

extern char *yytext;
extern int yylineno;
extern int yylex();
extern int yywrap();
extern int yyerror(char* msg);

%}


%union {float num;}
%start expr
%token <num> number
%type <num> expr e
%left '+' '-'
%left '/' '*'
%left '(' ')'


%%

expr: e	{
    		printf("value : %f\n", $$);
	}
;
e : 
	e '+' e  {$$ = $1 + $3;}
|
	e '-' e  {$$ = $1 - $3;}
|
	e '*' e  {$$ = $1 * $3;}
|
	e '/' e  {	if($3==0){
				yyerror("divide by 0 error");
			}else{
				$$ = $1 / $3;
			}
		}
|
	'(' e ')' {$$ = $2;}
|
	'-' number {$$ = -$2;}
|
	'+' number {$$ = $2;}
|
	number {$$ = $1;}
;

%%

int yywrap(){
	return 1;
}

int main(){
	printf("Enter the arithmetic expression : ");
	yyparse();
}

int yyerror(char* msg){
	printf("-------- ERROR DETECTED --------\n");
	printf("ERROR MESSAGE : %s\nLINE # : %d\nyytext : %s\n", msg, yylineno, yytext);
	exit (EXIT_FAILURE);
	return 0;
}
