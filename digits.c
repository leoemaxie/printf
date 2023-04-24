#include "main.h"

/**
 * print_bin - prints a number in base 2.
 *
 * @ap: The number to print.
 *
 * Return: Number of digits printed.
 */
int print_bin(va_list *ap)
{
	return (print_number(va_arg(*ap, int), 2, false, 0));
}

/**
 * print_dec - prints a number in base 10.
 *
 * @ap: The digit to print.
 *
 * Return: Number of digits printed.
 */
int print_dec(va_list *ap)
{
	return (print_number(va_arg(*ap, int), 10, false, 0));
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
	return (print_number(va_arg(*ap, int), 8, false, 0));
}

