#include "main.h"

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
	int count = _puts("0x");
	char *s = convert(va_arg(ap, unsigned long int), 16, 87);

	(void)f;
	count += _puts(s);
	free(s);

	return (count);
}

