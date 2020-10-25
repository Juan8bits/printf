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
	int i, j, con, dig = 10;

	i = va_arg(num, int);
	j = i;
	for (con = 0; i > 10; con++, i /= 10);
	for (con; con > 1; con--)
		dig *= 10;
	for (dig = potencia;dig > 0;dig /= 10)
	{
		_putchar(j / dig);
		j %= dig;
	}
}
