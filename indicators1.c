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
