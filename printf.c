#include "io.h"

/**
 * _printf - Prints a formatted string to stdout.
 *
 * @str: The string to format & print.
 *
 * Return: Nothing.
 */
int check_percent(char c)
{
	if (c == '%')
		return (1);
	return (0);
}

int skip_format(char *str, int *start)
{
	int i;
	char fmt = {'d', 'x'};
	for (i = 0; i < 2; i++)
		for (; str[*start] != fmt[i] ; *start++)
		//*start++;
}
void print_digits(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
		print_digits(n / 10);

	_putchar(n % 10 + 48);
}
void print_hex(int n)
{
	if (n < 0)
		n = -n;
	if (n / 16)
		print_hex(n / 16);
	if (n % 16 < 10)
		_putchar(n % 16 + 48);
	else
		_putchar(n % 16 + 87);
}

void _printf(const char *fmt, ...)
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

