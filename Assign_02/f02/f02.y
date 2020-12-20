%{

#include<stdio.h>

int valid = 1;

extern int yylex();

extern int yyerror(char* msg);

extern int yywrap();

int n = 0; /* count of a */

int m = 0; /* count of b */

%}

%token A B
%%

str:S'\n' { return 1; }

S: X Y 
X: A X {n++;} | A {n++;} 
Y: B Y {m++;} | B {m++;}

%%

int yywrap(){
	return 0;
} 

int main(){
	printf("Enter the string: ");
   	yyparse();
	if(valid==1 && m<n){
		if(m<n){
			printf("This is a VALID STRING\n");
		}
	}else{
		printf("This is an INVALID STRING\n");
	}
}

int yyerror(char *msg){
	valid = 0;
	return 1;
}

