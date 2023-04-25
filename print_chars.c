#include "main.h"

/**
 * print_char - prints a char.
 *
 * @ap: The character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list *ap)
{
	int c = va_arg(*ap, int);

	if (c < 0 || c > 127)
		return (-1); /* Invalid ASCII */
	_putchar(c);

	return (1);
}

/**
 * print_str - prints a string.
 *
 * @ap: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_str(va_list *ap)
{
	int i;
	char *s = va_arg(*ap, char *);

	if (s == NULL)
		s = "(nill)";

	return (_puts(s));
}

/**
 * print_rev - prints a string in reverse.
 *
 * @ap: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_rev(va_list *ap)
{
	char *s = va_arg(*ap, char *);

	if (s == NULL)
		s = "(nill)";
	else
		strrev(s);

	return (_puts(s));
}

