#include "main.h"

/**
 * print_dec - prints a decimal number.
 *
 * @ap: variadic arguments to print from print f.
 *
 * Return: Number of digits printed.
 */
int print_dec(va_list *ap)
{
	return (print_number(va_arg(*ap, int)));
}

/**
 * print_unsign - prints an unsigned number in base 10.
 *
 * @ap: variadic arguments to print from print f.
 *
 * Return: Number of digits printed.
 */
int print_unsigned(va_list *ap)
{
	return (print_base(va_arg(*ap, unsigned int), 10, 0));
}

/**
 * print_int - prints a number in base 10.
 *
 * @ap: variadic arguments to print from print f.
 *
 * Return: Number of digits printed.
 */
int print_int(va_list *ap)
{
	return (print_number(va_arg(*ap, int)));
}
/**
 * print_number - Helper function to print a number.
 *
 * @n: The number to print.
 *
 * Return: Number of digits printed.
 */
int print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		(print_number(n / 10));

	_putchar(n % 10 + 48);

	return (count);
}

