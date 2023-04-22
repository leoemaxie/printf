#include "main.h"

/**
 * _printf - Prints a formatted string to stdout.
 *
 * @str: The string to format & print.
 *
 * Return: Nothing.
 */

int _printf(const char *fmt, ...)
{
	int i;
	va_list c;

	va_start(c, fmt);
	for (i = 0; fmt[i] != '\0'; i++)
	{
		if (check_percent(c))
		{
			if (fmt[i + 1] == 'd')
				print_digits(va_arg(c, int));

			if (fmt [i + 1] == 'x')
				print_hex(va_arg(c, int));
			i = i + 2;
		}
		_putchar(fmt[i]);
	}
	va_end(c);
}

