#include "main.h"

/**
 * print_string - writes the string c to stdout
 * @s: The string to print
 *
 * Return: On success 1.
 */
int print_string(va_lidt s)
{
	char *print_string;
	int  i = 0;

	print_string = va_arg(s, char *);
	if (print_string == NULL)
		print_string = "(null)";
	while (print_string[i])
	{
		_putchar(print_string[i]);
		i++;
	}
	return (i);
}
