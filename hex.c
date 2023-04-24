#include "main.h"

/**
 * print_hex - prints a number as an hexadecimal (base 16).
 *
 * @ap: The number to print.
 *
 * Return: The number of digirs printed.
 */
int print_hex(va_list *ap)
{
	return (print_number(va_arg(*ap, int), 16, true, 39));
}

/**
 * print_hex_upper - prints a number as an hexadecimal (base 16) in uppercase
 * alphabets.
 *
 * @ap: The number to print.
 *
 * Return: The number of digirs printed.
 */
int print_hex_upper(va_list *ap)
{
	return (print_number(va_arg(*ap, int), 16, true, 7));
}

