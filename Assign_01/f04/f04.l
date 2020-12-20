%{
int count = 0;
%}
letter [_a-zA-z]
digit [0-9]
identifiers {letter}({letter}|{digit}){0,30}
keywords (int|main|void|return|while|do|include|printf|scanf|gets|puts|fgets|double|float|char)
forLoop for\s*\([^;]*?;[^;]*?;[^)]*?\)
%%
{keywords} {
		ECHO; 
		printf("<keywords,%s>\n",yytext); 
	   };

{forLoop} {
		ECHO; 
		printf("<forLoop,%s>\n", yytext); 
	  };

{identifiers} {
		ECHO; 
		printf("<identifier,%s>\n", yytext); 
	      };
.|\n {};
%%

int yywrap(){
    return 0;
}

int main(){
    yylex();
    return 0;
}
