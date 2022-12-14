#include "main.h"
/**
 * sequence_parser - Receives the main string and all the necessary parameters
 * @format: A string containing all the desired characters.
 * @spec_list: A list of all the posible functions.
 * @args: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int sequence_parser(const char *format, f_specifiers spec_list[], va_list args)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			for (j = 0; spec_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == spec_list[j].sym[0])
				{
					r_val = spec_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (spec_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_putchar(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}

