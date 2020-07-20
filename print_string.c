#include "holberton.h"

/**
 * print_string - print string
 * @ps: print strings
 * Return: 1.
 */

int print_string(va_list ps)
{
	char *p_st;
	int x = 0;

	p_string = va_arg(ps, char *);
	if (p_string == NULL)
		p_string = "(null)";
	while (p_string[x])
	{
		_putchar(p_string[x]);
		x++;
	}
	return (x);
}
