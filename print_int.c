#include "holberton.h"

/**
 * print_integer - function to print the integer to std.
 int printf - function to print the interger.
 * @i: integer
 * Return: cont
 */

int printf(va_list i)
{
	int len, pow, y, digit, n, num, con = 0;

	n = va_arg(i, int);
	if (n)
	{
		if (n < 0)
		{
			_putchar('-');
			con++;
		}
		num = n;
		len = 0;
		while (num)
		{
			num /= 10;
			len++;
		}
		pow = 1;
		for (y = 1; y <= len - 1; y++)
			pow *= 10;
		for (y = 1; y <= len; y++)
		{
			digit = n / pow;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			con++;
			n -= digit * pow;
			pow /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (con);
}
