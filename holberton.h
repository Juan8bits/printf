#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct indicador
{
	char *ind;
	char* (*f)(void);
}ind_t;

typedef struct char_escape
{
	char *c;
	int ascii;
}esc_t;


int _printf(const char *format, ...);
char *ind_char(void);
char *ind_string(void);
char *ind_integer(void);
char *ind_integer(void);
char *ind_undintege(void);
char *ind_porcent(void);

#endif
