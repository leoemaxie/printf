#include "main.h"

/**
 * print_char - prints a char.
 *
 * @ap: The character to print.
 * @f: The flag modifier.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list ap, flag_t *f)
{
	(void)f;
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_str - prints a string.
 *
 * @ap: The string to print.
 * @f: The flag modifier.
 *
 * Return: The number of characters printed.
 */
int print_str(va_list ap, flag_t *f)
{
	char *s = va_arg(ap, char *);

	(void)f;

	if (s == NULL)
		s = "(null)";

	return (_puts(s));
}
