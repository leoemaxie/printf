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

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	return (i);
}

/**
 * print_rev - prints a string in reverse.
 *
 * @ap: The string to print.
 *
 * Return: The number of characters printed.
 * Return: Nothing.
 */
int print_rev(va_list *ap)
{
	char *s = va_arg(*ap, char *);
	int len = _strlen(s) - 1;

	for (; len >=  0; len--)
		_putchar(s[len]);

	return (len);
}

