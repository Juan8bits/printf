#include "holberton.h"

/**
 * ind_binary - Function that pass unsigned integer to a function.
 * @a: Pointer to structure.
 * Return: putchar print times.
 */
int ind_binary(va_list a)
{
	unsigned int number;

	number = va_arg(a, unsigned int);
	if (number == 0)
	{
		_putchar(48 + number);
		return (1);
	}
	return (dec_to_bin(number));
}

/**
 * ind_dec_to_bin - Function that prints unsigned integer to binary
 * @number: Pointer to structure.
 * Return: contp.
 */

int dec_to_bin(unsigned int number)
{
	short int mod;
	unsigned int contp;

	contp = 0, mod = 0;

	if (number > 0)
	{
		mod = number % 2;
		number /= 2;
		contp += dec_to_bin(number);
		contp++;
		_putchar(48 + mod);
	}
	return (contp);
}

/**
 * ind_literal - Function that prints literal strings
 * @S: Argument given.
 * Return: putchar print times.
 */
int ind_literal(va_list S)
{
	char *u;
	int i;

	i = 0;
	u = va_arg(S, char *);
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
		if ((u[i] > 0 && u[i] < 32) || u[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
		}
		else
			_putchar(u[i]);
		i++;
	}
	return (i);
}
