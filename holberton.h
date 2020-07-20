#ifndef MY_PRINTF_H
#define MY_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *fmt, ...);
int (*operators_funct(const char *oper))(va_list);
int print_char(va_list c);
int print_string(va_list s);
int print_integer(va_list i);
int _strcmp(char *s1, char *s2);
int _putchar(char c);

/**
* struct fmt - format oper structur.
* _printf - my printf prototype.
* @oper: operators
* @f: struct
*/

typedef struct fmt
{
	char *oper;
	int (*f)(va_list);
} fmt_t;

#endif /*MY_PRINTF_H*/
