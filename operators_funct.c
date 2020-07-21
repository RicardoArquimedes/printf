#include "holberton.h"
/**
 * operators_funct - function that selects
 * find and print the operators .
 * @s: operator
 * Return: NULL or function associated;
 */

int (*operators_funct(const char oper))()
{
	format_t op_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}};

	unsigned int x = 0;

	while (op_f[x].oper)
	{
		if (op_f[x].oper[0] == oper)
		{
			return (op_f[x].f);
			x++;
		}
		
	}
	return (NULL);
}
