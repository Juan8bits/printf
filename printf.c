#include "holberton.h"

/**
 *
 *
 *
*/

int _printf(const char *format, ...)
{
	esc_t escc[] = {
		{'a', 7},
		{'b', 8},
		{'t', 9},
		{'n', 10},
		{'v', 11},
		{'f', 12},
		{'r', 13}
	};
	ind_t indv[] = {
		{'c', ind_char},
		{'s', ind_string}/*,
		{'d', ind_integer},
		{'i', ind_integer},
		{'u', ind_undinteger},
		{'%', ind_porcent}*/
	};

	int i, j;
	va_list listArg;
	int contp;

	contp = 0;
	va_start(listArg, format);
	for (i = 0; format[i]; i++)
	{
		/* Comparar caracter de escape */
		if (format[i] == 47)
		{
			for (j = 0; j < 7; j++)
			{
				if(format[i + 1] == escc[j].c)
					_putchar(escc[j].ascii);
			}
			contp++;
			/* añadir edge case: el caracter no está en lista */
			i++;
		}
		else if (format[i] == 37)
		{
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == indv[j].ind)
					contp += indv[j].function(listArg);
			}
			i += 2;
		}
		_putchar(format[i]);
		contp++;
	}
	return (contp);
}
