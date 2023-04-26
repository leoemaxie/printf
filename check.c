#include "main.h"

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
