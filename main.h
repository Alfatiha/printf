#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct convert - defines a structure for symbols and functions
 * @sym: operator
 * @f: function pointer
*/

struct convert
{
	char *sym;
	int (*f)(va_list);
};

typedef struct convert f_specifiers;

/*Our Fuctions*/
int _putchar(char);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
#endif
