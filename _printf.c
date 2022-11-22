#include "main.h"

/**
  *_printf - our replica of the built in printf fuction
  *
  *@format: format specifiers
  *
  *Return: the number of characters printed
  */

/**
  *vprintk - print a char
  *
  *@args: a list of argument pointing to the
  *	character to be printed
  *
  *Return: Always 0 success
  */

void vprintk(const char *format, va_list args) {}

int _printf(const char *format, ...)
{
	va_list args; /*list of arguments*/

	/*format is the end of the list*/
	va_start(args, format);

	/*extract arguments*/
	vprintk(format, args);

	va_end(args);
}
