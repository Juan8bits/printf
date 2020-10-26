#include "holberton.h"
/**
 * ind_string -
 * @listArg: List of arguments given.
 * Return: putchar number times.
 */
int ind_string(va_list listArg)
{
        char *u;
        int i;

        u = va_arg(listArg, char *);
        for (i = 0; u[i] != 0; i++)
                _putchar(u[i]);
        return (i);
}
/**
 * ind_char -
 * @listArg: List of arguments given.
 * Return: putchar number times.
 */
int ind_char(va_list listArg)
{
	_putchar(va_arg(listArg, int));
	return (1);
}

/**
* ind_porcent -
* @listArg: List of arguments given.
*
*/

int ind_porcent(va_list __attribute__((unused))a)
{
	_putchar('%');
	return(1);
}
/**
 *ind_integer -
 * @listArg: List of arguments given.
 * Return: adasd.
 */

int ind_integer(va_list num)
{
	int i, j, con, flag = 0, dig = 1;

	i = va_arg(num, int);
	if (i < 0)
	{
		i *= -1;
		flag = 1;
		_putchar('-');
	}
	j = i;
	for (con = 0; i > 9; con++, i /= 10)
		;
	for (; con > 0; con--)
		dig *= 10;
	for (con = 0; dig > 0 ; dig /= 10)
	{
		_putchar(48 + (j / dig));
		j %= dig;
		con++;
	}
	return (con + flag);
}
