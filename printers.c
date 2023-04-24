#include "main.h"

/**
 * _putchar - Prints a character to stdout.
 *
 * @c: The character.
 *
 * Return: Nothing.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print - Prints any data in the specifued format.
 *
 * @s: The format string.
 * @start: Start index i.e the percent sign.
 * @size: Size of the formatter.
 * @ap: The variadic argument to format and print.
 * @f: Array of format structures.
 *
 * Return: Length of string printed.
 */
int print(const char *s, int *start, int size, va_list *ap, fmt_t *f)
{
	int specifier_index = skip_chars(s, start);
	char c = s[specifier_index];
	int fmt_index = get_fmt_index(c, size, f);

	set_start_index(start, specifier_index, fmt_index);

	if (fmt_index == -2)
		_putchar('%');

	return (str_printed_len(fmt_index, ap, f));
}

