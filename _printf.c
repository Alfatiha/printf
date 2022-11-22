#include "main.h"

/**
  *_printf - our replica of the built in printf fuction
  *
  *@format: format specifiers
  *
  *Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	int num_of_char;

	va_list args; /*list of arguments*/

	/*format is the end of the list*/
	va_start(args, format);

	va_end(args);

	/*lets use a struct called f_specifiers*/

	f_specifiers spec_list[] = {
	{"c", print_char},
	{"s", print_string}
	};

	if (format == NULL)
		return (-1);

	/*Here we call parser function*/
	num_of_char = parser(format, spec_list, args);

	return (num_of_char);
}