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
	int (*fmt_print)(va_list, flag_t *);
	int i, len = 0;
	flag_t flags = {0, 1, 2};
	va_list ap;

	/* Empty string or an almost empty string with only a percent */
	if (fmt == NULL || (fmt[0] == '%' && fmt[1] == '\0'))
		return (-1);
	/* Flags present but no more characters. */
	if (fmt[0] == '%' && fmt[1] == ' ' && fmt[2] == '\0')
		return (-1);

	va_start(ap, fmt);
	for (i = 0; fmt[i] != '\0'; i++)
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == '%')
			{
				len += _putchar('%');
				continue;
			}

			//while (get_flag(fmt[i], &flags))
				//i++;

			fmt_print = get_fmt_print(fmt[i]);
			len += (fmt_print) ? fmt_print(ap, &flags) : _printf("%%%c", fmt[i]);
		} else
			len += _putchar(fmt[i]);

	}
	_putchar('\n');
	_putchar(-1);
	va_end(ap);

	return (len);
}
