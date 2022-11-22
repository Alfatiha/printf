#include "main.h"

/**
 * unsigned_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The length of numbers printed
 */
int unsigned_number(unsigned int n)
{
	int div;
	int num_len;
	unsigned int num;

	div = 1;
	num_len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		num_len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (num_len);
}

/**
 * print_unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: the unsigned numbers
 */
int print_unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (unsigned_number(num));

	if (num < 1)
		return (-1);
	return (unsigned_number(num));
}
