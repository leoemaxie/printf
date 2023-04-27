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
	int count = 0;
	unsigned int p = va_arg(ap, unsigned long int);
	char *s;

	if (!p)
		return (_puts("(nil)"));

	(void)f;
	s = convert(p, 16, 87);
	count += _puts("0x");
	count += handle_malloc(s);

	return (count);
}

