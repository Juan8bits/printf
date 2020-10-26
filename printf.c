#include "holberton.h"

/**
* get_ind_func - get the name of the function depending of the type
* @s: char after %
* Return: -1 if type it's not found, else obtain function and # of char 
*/

int (*get_ind_func(char s))(va_list)
{
	int j;
	ind_t indv[] = {
		{'c', ind_char},
		{'s', ind_string},
		{'%', ind_porcent},
		{'d', ind_integer},
/*{'i', ind_integer},*/
/*{'u', ind_undinteger},*/
	};

	for (j = 0; j < 4; j++)
	{
		if (s == indv[j].ind)
			return (indv[j].function);
	}
	exit(-1);
}

/**
* get_escc_func - get the name of the function depending of the especial escape
* @s: char afetr /
* Return: -1 if esp. esc. it's not found, else return ascii 
*/
int  get_escc_func(char s)
{
	int j;
	esc_t escc[] = {
		{'a', 7},
		{'b', 8},
		{'t', 9},
		{'n', 10},
		{'v', 11},
		{'f', 12},
		{'r', 13}
	};

	for (j = 0; j < 7; j++)
	{
		if (s == escc[j].c)
		{
			_putchar(escc[j].ascii);
			return (1);
		}
	}
	exit(-1);
}

/**
 *
 *
 *
*/

int _printf(const char *format, ...)
{
	int i;
	va_list listArg;
	int contp;

	contp = 0;
	va_start(listArg, format);
	for (i = 0; format[i]; i++)
	{
		/* Comparar caracter de escape */
		if (format[i] == 47)
		{
			contp += get_escc_func(format[i + 1]);
			/* añadir edge case: el caracter no está en lista */
			i++;
		}
		else if (format[i] == 37)
		{
			contp += get_ind_func(format[i + 1])(listArg);
			i += 2;
		}
		_putchar(format[i]);
		contp++;
	}
	return (contp);
}
