%{
    #include<string.h>
    int count = 0;
    char* str = NULL;
    void inputX(char** str);
%}
data .*
%%
{data} { 
	++count;
	if(strstr(yytext,str)!=NULL){
		printf("Matching at line %d : %s \n", count, yytext); 
	}
      }
.|\n { 
	++count; 
     }
%%
int yywrap(){
    return 1;
}
int main(){
    
    inputX(&str);
    yylex();
    return 0;
}

void inputX(char** str){	
	
	if(*str==NULL){
		*str = (char*)calloc(100, sizeof(char));
	}
	printf("Enter the string that you want to search for : ");
	scanf("%s", *str);
	printf("The data that you have entered is %s\n", *str);

}
