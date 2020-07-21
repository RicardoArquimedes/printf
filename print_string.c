#include "holberton.h"

/**
 * print_string - print string
 * @ps: print strings
 * Return: 1.
 */

int print_string(va_list ps)
{
	char *p_st;
	unsigned int x = 0;

	p_st = va_arg(ps, char *);
	if (p_st == NULL)
		p_st = "(null)";
	while (p_st[x])
	{
		_putchar(p_st[x]);
		x++;
	}
	return (x);
}
