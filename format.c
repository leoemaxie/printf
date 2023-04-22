#include "main.h"
/**
 * get_formatters_length - Gets the number of the formatter stricture.
 *
 * @f: The format structure.
 *
 * Return: Length of the formatter structure.
 */
int get_formatters_length(fmt_t *f)
{
	int i = 0;

	while (f[i].specifier)
	{
		f++;
		i++;
	}
	return (i);
}

/**
 * print_format - Prints a formatted text according to the specifier.
 *
 * @index: The index of the specifier.
 * @ap: The data to replace the percent sign.
 * @f: The format structure.
 *
 * Return: Nothing.
 */
void print_format(int index, va_list *ap, fmt_t *f)
{
	if (index != -1)
		f[index].print(ap);
}

/**
 * skip_chars - Skips all characters from the percent sign to the end of the
 * specifier.
 *
 * @s: The string to search for and skip characters.
 * @start: The index of the percent sign.
 * @size: Size of the formatter.
 * @f: The format structure.
 *
 * Return: The index of the specifier if present in the fmt_t array, else -1.
 */
int skip_chars(const char *s, int *start, int size, fmt_t *f)
{
	int i = *start;
	int j;

	for (; (s[i] != ' '); i++) {
		for (j = 0; j < size; j++)
			if (s[i] == f[j].specifier)
				return (j);
	}
	return (-1);
}
