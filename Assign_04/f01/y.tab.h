#define VAR 257
#define CHARACTER 258
#define INTEGER 259
#define RECORD 260
#define BEGINX 261
#define END 262
#define INDEX 263
#define SYM 264
#define SYM_LONG 265
typedef union { char symbol; int type; char* symbol_ptr;} YYSTYPE;
extern YYSTYPE yylval;
