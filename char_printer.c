#include "main.h"

/**
 * print_char - prints a char.
 *
 * @ap: The character to print.
 *
 * Return: Nothing.
 */
void print_char(va_list *ap)
{
	int c = va_arg(*ap, int);

	_putchar(c);
}

/**
 * print_percent - prints a percent.
 *
 * @ap: The character to print.
 *
 * Return: Nothing.
 */
void print_percent(va_list *ap)
{
	print_char(ap);
}

/**
 * print_str - prints a string.
 *
 * @ap: The string to print.
 *
 * Return: Nothing.
 */
void print_str(va_list *ap)
{
	int i;
	char *s = va_arg(*ap, char *);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

/**
 * print_rev - prints a string in reverse.
 *
 * @ap: The string to print.
 *
 * Return: Nothing.
 */
void print_rev(va_list *ap)
{
	char *s = va_arg(*ap, char *);
	int len = _strlen(s);

	for (; len >=  0; len--)
		_putchar(s[len]);
}
