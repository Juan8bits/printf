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
		{'d', ind_integer},
		{'i', ind_integer},
		{'b', ind_binary},
		{'S', ind_literal}
	};

	for (j = 0; j < 6; j++)
	{
		if (s == indv[j].ind)
			return (indv[j].function);
	}
	return (ind_porcent);
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
	_putchar(s);
	return (1);
}

/**
 * _printf - Functiont that do printf function
 * @format: Pointer to adrres.
 * Return: Putchar number times.
*/

int _printf(const char *format, ...)
{
	int i, retind = 0;
	va_list listArg;
	int contp;

	contp = 0;
	va_start(listArg, format);
	if (format != 0)
	{
		for (i = 0; format[i]; i++)
		{
			/*Is the character to compare an escape character? */
			if (format[i] == 47)
			{
				contp += get_escc_func(format[i + 1]);
				i++;
			}
			/* Is the character to compare an indicator? */
			else if (format[i] == 37)
			{
				if (format[i + 1] == 0)
					return (-1);
				retind = get_ind_func(format[i + 1])(listArg);
				if (retind >= 0 || format[i + 1] == 37)
					i++;
				if (retind < 0)
					retind = 1;
				contp += retind;
			}
			else
			{
				_putchar(format[i]);
				contp++;
			}
		}
		return (contp);
	}
	return (-1);
}
