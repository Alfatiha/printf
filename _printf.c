#include "main.h"

/**
  *_printf - our replica of the built in printf fuction
  *
  *@format: format specifiers
  *
  *Return: characters printed
  */

int _printf(const char *format, ...)
{
	int num_of_char;

	/*lets use a struct called f_specifiers*/

	f_specifiers spec_list[] = {
	{"%", print_percent},
	{"c", print_char},
	{"s", print_string},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{"u", print_unsigned_integer}
	};
	va_list args; /*list of arguments*/

	/*format is the end of the list*/
	va_start(args, format);

	if (format == NULL)
		return (-1);

	/*Here we call parser function*/
	num_of_char = sequence_parser(format, spec_list, args);
	return (num_of_char);
	va_end(args);
}
