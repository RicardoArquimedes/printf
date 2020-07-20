#include "holberton.h"

/**
 * operators_funct - function that selects
 * find and print the operators .
 * @s: operator
 * Return: NULL or function associated;
 */

int (*operators_funct(const char *s))(va_list)
/*struct to find and print the operators, c,s,d,i ) */

{
	fmt_t op_f[] = {
	    {"c", print_char},
	    {"s", print_string},
	    {"d", print_integer},
	    {"i", print_integer},
	    {NULL, NULL}};

	unsigned int x = 0;

	while (op_f[x].oper)
	{
		if (_strcmp(s, (op_f[x].oper)) == 0)

		{
			return (*(op_f[x]).f);
			x++;
		}
		return (NULL);
	}
