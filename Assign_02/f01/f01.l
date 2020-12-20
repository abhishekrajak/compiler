%{

#include "y.tab.h"
extern char* yytext;

%}

%%

a return A;

b return B;

c return C;

.|\n return yytext[0];

%%
