#include "holberton.h"

/**
 * *operators_funct - selects the correct func to perform the operation
 * sked by the user
 * @oper: operator passed as arguement to program
 * Return: a pointer to the function
 */

int (*operators_funct(const char oper))()
{
	format_t op_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_bin},
		{NULL, NULL},
	};
	unsigned int x = 0;

	while (op_f[x].oper)
	{
		if (op_f[x].oper[0] == oper) /* En que iteracion encontro la operacion 
		                                se encuentra una s una i, .oper accede que si es 
						igua es decir que si d es = d 0 s es =s*/
		{
			return (op_f[x].f); /*aqui retorn op_f = es aqui f= a la funcion print int, */
		}
		x++;
	}
	return (NULL);
}
