%{
#include<stdio.h>
#include<stdlib.h>
%}
%%
\/\/(.*) {};    
\/\*(.*\n)*.*\*\/  {};
%%

int yywrap(){}

int main(){

	yyin = fopen("source.c","r");
	yyout = fopen("output.c","w");
	yylex();

	return 0;
}
