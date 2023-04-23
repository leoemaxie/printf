#include "main.h"

/**
 * _printf - Prints a formatted string to stdout.
 *
 * @fmt: The string to format & print.
 *
 * Return: Nothing.
 */

int _printf(const char *fmt, ...)
{
	int i = 0;
	va_list ap;
	fmt_t formatters[] = {
		{print_char, 'c'}, {print_digit, 'd'}, {print_hex, 'x'}, {print_str, 's'}
	};
	int size = sizeof(formatters) / sizeof(formatters[0]);

	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (check_percent(fmt[i]))
		{
			int index = skip_chars(fmt, &i, size, formatters);

			print_format(index, &ap, formatters);
		}
		else
			_putchar(fmt[i]);
		i++;
	}
	va_end(ap);

	_putchar('\n');
	return (0);
}

