#ifndef PRINTF
#define PRINTF

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct indicador - struct
* @ind: type of data
* @function: pointer to function
* Description: select function
*/
typedef struct indicador
{
	char ind;
	int (*function)(va_list);
} ind_t;
/**
*
*
*
*/
typedef struct char_escape
{
	char c;
	int ascii;
} esc_t;

int _putchar(char c);
int _printf(const char *format, ...);
int ind_char(va_list listArg);
int ind_string(va_list listArg);
int ind_porcent(va_list);
/* char *ind_integer(void); */
/*char *ind_integer(void); */
/*char *ind_undintege(void);*/

#endif
