#include "holberton.h"

/**
 * ind_string - Function that print string.
 * @listArg: List of arguments given.
 * Return: putchar number times.
 */
int ind_string(va_list listArg)
{
	char *u;
	int i;

	i = 0;
	u = va_arg(listArg, char *);
	if (u == NULL)
	{
		u = "(null)";
		while (u[i] != 0)
		{
			_putchar(u[i]);
			i++;
		}
		return (6);
	}
	while (u[i] != 0)
	{
		_putchar(u[i]);
		i++;
	}
	return (i);
}
/**
 * ind_char - Function that print char.
 * @listArg: List of arguments given.
 * Return: putchar number times.
 */
int ind_char(va_list listArg)
{
	_putchar(va_arg(listArg, int));
	return (1);
}

/**
* ind_porcent - Function that print %.
* @a: List of arguments given.
* Return: putchar number times.
*/

int ind_porcent(va_list __attribute__((unused))a)
{
	_putchar('%');
	return (-2);
}
/**
 *ind_integer - Function that print an integer number.
 * @num: List of arguments given.
 * Return: putchar number times.
 */

int ind_integer(va_list num)
{
	int i, j, a, con, flag, dig;

	flag = 0, dig = 1, i = 0;
	i = va_arg(num, signed int);
	a = i;
	if (i < 0)
	{
		if (i == -2147483648)
			i += 1;
		i *= (-1);
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
		if (dig == 1 && a == -2147483648)
			_putchar('8');
		else
		{
			_putchar(48 + (j / dig));
			j %= dig;
		}
		con++;
	}
	return (con + flag);
}

/**
* ind_fail - return fail cases
* @a: unused list
* Return: -1 always
*/

int ind_fail(va_list __attribute__((unused))a)
{
	return (-1);
}
