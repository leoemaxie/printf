#include "main.h"

/**
 * print_number - Helper function to print a number.
 *
 * @n: The number to print.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		(print_number(num / 10));

	_putchar(num % 10 + 48);
}

/**
 * count_digits - Helper function to count the number of digits in a number.
 *
 * @n: The number to count.
 *
 * Return: The number of digits.
 */
int count_digits(int n)
{
	int count = 0;
	unsigned int num = (n < 0) ? -n : n;

	while (num)
	{
		count++;
		num /= 10;
	}

	return (count);
}

/**
 * print_dec - prints a decimal number.
 *
 * @ap: variadic arguments to print from print f.
 * @f: The flag modifier.
 *
 * Return: Number of digits printed.
 */
int print_dec(va_list ap, flag_t *f)
{
	int n = va_arg(ap, int);

	(void)f;
	print_number(n);

	return (count_digits(n));
}

/**
 * print_int - prints a number in base 10.
 *
 * @ap: variadic arguments to print from print f.
 * @f: The flag modifier.
 *
 * Return: Number of digits printed.
 */
int print_int(va_list ap, flag_t *f)
{
	int n = va_arg(ap, int);

	(void)f;
	print_number(n);

	return (count_digits(n));
}

/**
 * print_uint - prints an unsigned number in base 10.
 *
 * @ap: variadic arguments to print from print f.
 * @f: The flag modifier.
 *
 * Return: Number of digits printed.
 */
int print_uint(va_list ap, flag_t *f)
{
	(void)f;
	return (handle_malloc(convert(va_arg(ap, unsigned int), 2, 0)));
}
