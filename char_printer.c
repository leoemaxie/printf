#include "main.h"

/**
 * print_str - prints a string.
 *
 * @n: The string to print.
 *
 * Return: Nothing.
 */
void print_str(va_list *ap)
{
	int i;
	char *s;
	va_list cpy_ap;

	//va_copy(cpy_ap, *ap);
	s = va_arg(*ap, char *);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

/**
 * print_char - prints a char.
 *
 * @c: The character to print.
 *
 * Return: Nothing.
 */
void print_char(va_list *ap)
{
	int c;
	va_list cpy_ap;

	//va_copy(cpy_ap, *ap);
	c = va_arg(*ap, int);
	_putchar(c);
}
