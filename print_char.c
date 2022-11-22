#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @list: list of arguments
 *
 * Return: amount of characters
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
