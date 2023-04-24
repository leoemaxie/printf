#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string.
 *
 * Return: The length of s.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_printed_len - Calculates the length of string printed.
 *
 * @s: Index of the format structure handling the printing in the fmt_t array.
 * @ap: The data to print.
 * @f: Array of format structures.
 *
 * Return: Length of string printed.
 */
int str_printed_len(int fmt_index, va_list *ap, fmt_t *f)
{
	int len = 0;

	/* In the case of two onsecutive %, the second % is escaped and printed, the
	 * first % is the specifier, and it is ignored because it isn't printed.
	 * Similarly, if the specifier is invalid, the percent is ignored but the
	 * specifier is printed.
	 */
	if (fmt_index < 0) len -= 1;

	/* ignores the specifier and % since only the content is printed e.g %s */
	else len += f[fmt_index].print(ap) - 2;

	return (len);
}
