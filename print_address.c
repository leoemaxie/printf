#include "main.h"

/**
 * print_addr - Helper function to print the address of a variable.
 *
 * @ap: The address to print.
 *
 * Return: The lengrh of the address.
 */
int print_base_addr(unsigned long int a)
{
	int count = 2;

	if (a)
	{
		print_base_addr(a / 16);
		if (a % 16 > 9)
			_putchar(a % 16 + 87);
		else
			_putchar(a % 16 + 48);
	}
	count++;

	return (count);
}

/**
 * print_addr - Prints rhe address of a variable.
 *
 * @ap: The address to print.
 *
 * Return: The lengrh of the address.
 */
int print_addr(va_list *ap)
{
	_putchar('0');
	_putchar('x');
	return (print_base_addr(va_arg(*ap, unsigned long int)));
}

