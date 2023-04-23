#include "main.h"

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
 * specifier and sets the index to the next character after the specifier.
 * NOTE: Digits represent the width, space represent the end of the specifier.
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
	int i = *start + 1; /* ignores the percent sign */
	int j;

	for (; s[i] != ' '; i++)
		if (s[i] < 48 || s[i] > 57)
			/* it's not a digit, it might be a valid specifier, stop, let's check. */
			break;

	for (j = 0; j <= size; j++)
	{
		if (s[i] == f[j].specifier)
		{
			*start = i; /* ignores the valid specifier and their widths*/
			return (j);
		}
	}

	return (-1);
}
