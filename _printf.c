#include "holberton.h"

/**
 * _printf - This function implement a printf function of C
 * allows to format string according your format specifier
 * @format: This is the input to print in standard output
 *
 * Return: length  of output string printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int print_char = 0;
	unsigned int i;
	int (*format_print)();

	if ((!format) || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format_print = operators_funct(format[i + 1]);
			if (format_print)
				print_char += format_print(list);
			else
			{
				if (format[i + 1] == '%')
					print_char += _putchar(format[i + 1]);
				else
				{
					print_char += _putchar(format[i]);
					print_char += _putchar(format[i + 1]);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			print_char++;
		}
	}

	va_end(list);
	return (print_char);

}
