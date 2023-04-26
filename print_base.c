#include "main.h"

/**
 * print_bin - prints a number in base 2.
 *
 * @ap: The number to print.
 * @f: The flag modifier.
 *
 * Return: Number of digits printed.
 */
int print_bin(va_list ap, flag_t *f)
{
	(void)f;
	return (handle_malloc(convert(va_arg(ap, unsigned int), 2, 0)));
}
/**
 * print_oct - prints a number in base 10.
 *
 * @ap: The digit to print.
 * @f: The flag modifier.
 *
 * Return: Number of digits printed.
 */
int print_oct(va_list ap, flag_t *f)
{
	(void)f;
	return (handle_malloc(convert(va_arg(ap, unsigned int), 8, 0)));
}

/**
 * print_hex - prints a number as an hexadecimal (base 16).
 *
 * @ap: The number to print.
 * @f: The flag modifier.
 *
 * Return: The number of digits printed.
 */
int print_hex(va_list ap, flag_t *f)
{
	(void)f;
	return (handle_malloc(convert(va_arg(ap, unsigned int), 16, 87)));
}

/**
 * print_hex_upper - prints a number as an hexadecimal (base 16) in uppercase.
 *
 * @ap: The number to print.
 * @f: The flag modifier.
 *
 * Return: The number of digits printed.
 */
int print_hex_upper(va_list ap, flag_t *f)
{
	(void)f;
	return (handle_malloc(convert(va_arg(ap, unsigned int), 16, 55)));
}

