#include <stdio.h>
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
		{"c", ind_char},
		{"s", ind_string},
		{"d", ind_integer},
		{"i", ind_integer},
		{"u", ind_undinteger},
		{"%", ind_porcent}
	};

	int i, j;
	va_list listArg;
	char *ptrlistArg;

	ptrlistArg = format;

	va_start(listArg, format);
	
	if (format != NULL)
	for (i = 0; ptrlistArg[i]; i++)
	{
		if (ptrlistArg[i] == 47)
		{
			for (j = 0; j < 7; j++)
			{
				if(ptrlistArg[i + 1] == escc[j].c)
					ptrlistArg[i] == escc[j].ascii;
			}
		}
		else if (ptrlistArg[i] == 37)
		{
			for (j = 0; j < 4; j++)
			{
				ptrlistArg[i] == indv[j].in;
			}
		}
	}
}
