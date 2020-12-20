%{

#include <stdio.h>

#include <stdlib.h>

char data[] = "limit";

int count=0;

%}



%%

[a-zA-Z]+ {

		if(strcmp(yytext, data)==0){

			count++;

		}

	}

%%



int yywrap(){

	return 1;

}



int main(){

	yylex();

	if(count>4){

		printf("\n\nLimit crossed\n");

	}

	else{

		printf("\n\nNumber of occurrences of 'limit' : %d\n",count);

	}

	return 0;

}
