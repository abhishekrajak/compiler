%{

#include<stdio.h>

int valid = 1;

extern int yylex();

extern int yyerror(char* msg);

extern int yywrap();

%}

%token A B C

%%

str:S'\n' { return 1; }

S: X | A S C

X: X B | B


%%

int yywrap(){
	return 0;
} 

int main(){
	printf("Enter the string: ");
   	yyparse();
	if(valid==1){
		printf("This is a VALID STRING\n");
	}else{
		printf("This is an INVALID STRING\n");
	}
}

int yyerror(char *msg){
	valid = 0;
	return 1;
}

