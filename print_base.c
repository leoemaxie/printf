#include "main.h"

/**
 * print_base - prints a number in a specified base.
 *
 * @n: The number to print.
 * @base: The base of the number.
 * @alpha - The alphabetic number of the base if present.
 *
 * Return: The number of digirs printed.
 */
int print_base(unsigned int n, unsigned int base, int alpha)
{
	int count = 0;

	if (n)
	{
		print_base(n / base, base, alpha);
		if (n % base > 9)
			_putchar(n % base + alpha);
		else
			_putchar(n % base + 48);
	}
	count++;

	return (count);
}

/**
 * print_bin - prints a number in base 2.
 *
 * @ap: The number to print.
 *
 * Return: Number of digits printed.
 */
int print_bin(va_list *ap)
{
	return (print_base(va_arg(*ap, unsigned int), 2, 0));
}
/**
 * print_oct - prints a number in base 10.
 *
 * @ap: The digit to print.
 *
 * Return: Number of digits printed.
 */
int print_oct(va_list *ap)
{
	return (print_base(va_arg(*ap, unsigned int), 8, 0));
}

/**
 * print_hex - prints a number as an hexadecimal (base 16).
 *
 * @ap: The number to print.
 *
 * Return: The number of digirs printed.
 */
int print_hex(va_list *ap)
{
	return (print_base(va_arg(*ap, unsigned int), 16, 87));
}

/**
 * print_hex_upper - prints a number as an hexadecimal (base 16) in uppercase.
 *
 * @ap: The number to print.
 *
 * Return: The number of digirs printed.
 */
int print_hex_upper(va_list *ap)
{
	return (print_base(va_arg(*ap, unsigned int), 16, 55));
}

