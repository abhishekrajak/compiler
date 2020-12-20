%{

#include <stdio.h>

#include <stdlib.h>

int count=0;

%}



%%

"limit" { 

		count++; 

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
