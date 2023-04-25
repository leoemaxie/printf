#include "main.h"

/**
 * get_fmt_print - Gets the corresponding print function of the format
 * structure in the format array based on the specifiers passed.
 *
 * @c: The specifier to check.
 *
 * Return: A pointer to the print function of the format structure if present
 * else NULL.
 */
int (*get_fmt_print(char c))(va_list, flag_t *)
{
	fmt_t formatters[] = {
		{print_addr, 'p'},
		{print_bin, 'b'},
		{print_char, 'c'},
		{print_dec, 'd'},
		{print_hex, 'x'},
		{print_hex_upper, 'X'},
		{print_int, 'i'},
		{print_oct, 'o'},
		{print_rev, 'r'},
		{print_rot13, 'R'},
		{print_str, 's'},
		{print_Str, 'S'},
		{print_addr, 'p'},
		{print_unsigned, 'u'}
	};

       	int i;
	int size = sizeof(formatters) / sizeof(formatters[0]);

	for (i = 0; i <= size; i++)
		if (c == formatters[i].specifier)
			return (formatters[i].print);

	return (NULL);
}
