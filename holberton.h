#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct indicador
{
	char ind;
	int (*function)(va_list);
}ind_t;

typedef struct char_escape
{
	char c;
	int ascii;
}esc_t;

int _putchar(char c);
int _printf(const char *format, ...);
int ind_char(va_list listArg);
int ind_string(va_list listArg);
/*char *ind_integer(void);
char *ind_integer(void);
char *ind_undintege(void);
char *ind_porcent(void);*/

#endif
