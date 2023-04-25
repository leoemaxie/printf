#include "main.h"

/**
 * get_fmt_index - Gets the index of the specifier in the fmt_t array.
 *
 * @c: The specifier.
 * @size: Size of the formatter.
 * @f: The format structure.
 *
 * Return: The index of the specifier if present in the fmt_t array, 
 *	-2 if specifier is a percent else -1.
 */
int get_fmt_index(char c, int size, fmt_t *f)
{
	int i;

	if (c == '%')
		return (-2);

	for (i = 0; i <= size; i++)
		if (c == f[i].specifier)
			return (i);

	return (-1);
}

/**
 * set_start_index - Sets the index to the next character after the specifier.
 *
 * @start: The start index i.e the percent sign.
 * @specifier_index: The index of the specifier.
 * @fmt_index: The index of the format structure that handles the specifier.
 *
 * Return: Nothing.
 */
void set_start_index(int *start, int specifier_index, int fmt_index)
{
	if (fmt_index == -2)
		*start += 1;
	if (fmt_index > -1)
		*start = specifier_index;
}

