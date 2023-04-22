#include "main.h"

/**
 * print_digits - prints a digit.
 *
 * @n: The digit to print.
 *
 * Return: Nothing.
 */
void print_digit(va_list *ap)
{
	va_list ap1;
	va_copy(ap1, *ap);
	int n = va_arg(ap1, int);

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10)
		print_digits(n / 10);

	_putchar(n % 10 + 48);
}

/**
 * print_hex - prints an hexadecimal.
 *
 * @n: The digit to print.
 *
 * Return: Nothing.
 */
void print_hex(va_list *ap)
{
	va_list ap1;
	va_copy(ap1, *ap);
	int n = va_arg(ap1, int);

	if (n < 0)
		n = -n;
	if (n / 16)
		print_hex(n / 16);
	if (n % 16 < 10)
		_putchar(n % 16 + 48);
	else
		_putchar(n % 16 + 87);
}
