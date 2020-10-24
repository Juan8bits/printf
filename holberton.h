#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct indicador
{
	char *ind;
	char (*c)(void);
}ind_t;

typedef struct char_escape
{
	char *c;
	int ascii;
}esc_t;


int _printf(const char *format, ...);

#endif
