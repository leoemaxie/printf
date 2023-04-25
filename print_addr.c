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
 * @f: The flag modifier.
 *
 * Return: The lengrh of the address.
 */
int print_addr(va_list ap, flag_t *f)
{
	int i = 50;
	int count = 0;
	unsigned long int n = va_arg(ap, unsigned long int);
	char s[50];

	(void)f;
	count += _puts("0x");

	while (n != 0)
	{
		if (n % 16 > 9)
			s[i--] = (n % 16 + 87);
		else
			s[i--] = (n % 16 + 48);
		n /= 16;
	}

	for (; i <= 50; i++)
		count += _putchar(s[i]);

	return (count);
}

