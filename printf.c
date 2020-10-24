#include <stdio.h>
/**
*
*
*
*/

int _printf(const char *format, ...)
{
	esc_t escc[] = {
		{a, 7},
		{b, 8},
		{t, 9},
		{n, 10},
		{v, 11},
		{f, 12},
		{r, 13}
	};
	ind_t indv[] = {
		{},
		{},
		{},
		{}
	};

	int i, j;
	if (format != NULL)
	for (i = 0; format[i]; i++)
	{
		if (format[i] == 47)
		{
			for (j = 0; j < 7; j++)
			{
				if(format[i + 1] == escc[j].c)
					format[i] == escc[j].ascci;
			}
		}
		else if (format[i] == 37)
		{
			for (j = 0; j < 4; j++)
			{
				format[i] == indv[j].in;
			}
		}
	}
}
