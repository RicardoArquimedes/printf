#include "holberton.h"

/**
 * print_char - writes the char to print into standar output
 * @pc: character
 * Return: 1.
 */

int print_char(va_list pc)
{

	char p_char;

	p_char = va_arg(pc, int);
	_putchar(p_char);
	return (1);
}

/**
* print_perc - print the percent
*
* Return: 1.
*/

int print_perc(void)
{
	_putchar('%');
	return (1);
}
