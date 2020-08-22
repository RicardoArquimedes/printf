#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*operators_funct(const char oper))();
int print_char(va_list c);
int print_string(va_list s);
int print_integer(va_list i);
int print_rot13(va_list R);
int _putchar(char c);
int print_bin(va_list b);

/**
* struct format - format oper structur.
* _printf - my printf prototype.
* @oper: operators
* @f: struct
*/

typedef struct format
{
	char *oper;
	int (*f)();
} format_t;

#endif /*MY_PRINTF_H*/
