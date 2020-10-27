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
