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
	va_list ap;
	fmt_t formatters[] = {
		{print_digit, 'd'}, {print_hex, 'x'}
	};
	int size = sizeof(formatters) / sizeof(formatters[0]);

	va_start(ap, fmt);
	for (i = 0; fmt[i] != '\0'; i++)
	{
		if (check_percent(fmt[i]))
		{
			int index = skip_chars(fmt, &i, size, formatters);
			print_format(index, &ap, formatters);
		}
		_putchar(fmt[i]);
	}
	va_end(ap);

	return (0);
}

