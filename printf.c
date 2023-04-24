#include "main.h"

/**
 * _printf - Prints a formatted string to stdout.
 *
 * @fmt: 5The string to format & print.
 *
 * Return: Length of the string excluding the specifier.
 */

int _printf(const char *fmt, ...)
{
	int i = 0, len = 0;
	va_list ap;
	fmt_t formatters[] = {
		{print_bin, 'b'},  {print_char, 'c'}, {print_dec, 'd'}, {print_hex, 'x'},
		{print_hex_upper, 'X'}, {print_oct, 'o'}, {print_rev, 'r'}, {print_str, 's'}
	};
	int size = sizeof(formatters) / sizeof(formatters[0]);

	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
			 len += print(fmt, &i, size, &ap, formatters);
		else
			_putchar(fmt[i]);
		i++;
	}
	va_end(ap);

	_putchar('\n');

	return (len + i);
}

