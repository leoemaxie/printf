#include "main.h"

/**
 * reverse_digit - reverses a digit.
 *
 * @n: The digit to reverse.
 *
 * Return: The reversed digit.
 */
int reverse_digit(int n)
{
	int rem, rev = 0;

	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}

	return (rev);
}

/**
 * print_digit - prints a number in base 10.
 *
 * @n: The digit to print.
 *
 * Return: Nothing.
 */
void print_digit(va_list *ap)
{
	int n = va_arg(*ap, int);
	int digit;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	digit = reverse_digit(n);;
	while (digit > 0)
	{
		_putchar(digit % 10 + 48);
		digit /= 10;
	}
}

/**
 * print_hex - prints a number as an hexadecimal.
 *
 * @n: The digit to print.
 *
 * Return: Nothing.
 */
void print_hex(va_list *ap)
{
	int n = va_arg(*ap, int);
	int digit;

	if (n < 0)
		n = -n;

	
	digit = reverse_digit(n);
	while (digit / 16)
	{
		if (digit % 16 < 10)
			_putchar(digit % 16 + 48);
		else
			_putchar(digit % 16 + 87);
		digit /= 16;
	}
}
