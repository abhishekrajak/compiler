#define CHAR 257
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define SYM 261
#define STRUCT 262
#define INDEX 263
typedef union { char symbol; int type; } YYSTYPE;
extern YYSTYPE yylval;
