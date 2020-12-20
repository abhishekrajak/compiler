%{
    #include<string.h>
    int count = 0;
    char str[100];
    char fileName[100];
    void setStr(char* str);
%}
all .*
%%
{all}+ { 
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

    setStr(str);
    printf("Enter the name of the file : ");
    scanf("%s", fileName);
    
    extern FILE* yyin;
    yyin = fopen(fileName, "r");

    if(yyin==NULL){
	printf("NULL XX");
    }	

    yylex();
    return 0;
}

void setStr(char* str){
	printf("Enter the string : ");
	int i=0;
	char c;
	while((c = getchar()) != '\n'){
		str[i++] = c;
	}
	str[i] = '\0';
}
