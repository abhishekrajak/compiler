%{

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int arr[] = {0, 0, 0, 0, 0};

char* str[]={"int", "float", "double", "char", "void"};

%}



%%

"int"   { 

		if(arr[0]==0){ 

			arr[0]++; 

			printf("%s -> Integer data type\n",yytext); 

		} else { 

			printf("ERROR: %s Already present\n",yytext); 

		} 

	}

"float" { 

		if(arr[1]==0){ 

			arr[1]++; 

			printf("%s -> Floating point data type\n",yytext); 

		} else { 

			printf("ERROR: %s Already present\n",yytext); 

		} 

	} 

"double" { 

		if(arr[2]==0){ 

			arr[2]++; 

			printf("%s -> Double data type\n",yytext); 

		} else { 

			printf("ERROR: %s Already present\n",yytext); 

		} 

	 } 

"char" { 

		if(arr[3]==0){ 

			arr[3]++; 

			printf("%s -> Character data type\n",yytext); 

		} else { 

			printf("ERROR: %s Already present\n",yytext); 

		} 

       } 

"void" { 

		if(arr[4]==0){ 

			arr[4]++; 

			printf("%s -> Void data type\n",yytext); 

		} else { 

			printf("ERROR: %s Already present\n",yytext); 

		} 

  	}

.

%%



int yywrap(){

	return 1;

}



int main(){

	yylex();

	int i;

	printf("\nList of data types present\n");

	for(i=0; i<5; i++){

		if(arr[i]==1){

			printf("%s\n",str[i]);

		}

	}

	return 0;

}
