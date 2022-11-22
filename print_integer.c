#include "main.h"

/**
 * number - is a number signed or not
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int number(va_list args)
{
	int n;
	int div;
	int arg_len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	arg_len = 0;

	if (n < 0)
	{
		arg_len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		arg_len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (arg_len);
}

/**
 * print_integer - Prints integer
 * @list: list of arguments
 * Return: Will return the characters printed.
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = number(list);
	return (num_length);
}
