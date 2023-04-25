#include "main.h"

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

/**
 * skip_chars - Skips all characters from the percent sign to the specifier
 * Digits represent width, precision, etc.
 * Space represent the end of the specifier.
 *
 * @s: The string to search for and skip characters.
 * @start: The index of the percent sign.
 *
 * Return: The index of the specifier in the string.
 */
int skip_chars(const char *s, int *start)
{
	int i = *start + 1; /* ignores the percent sign */

	for (; s[i] != ' ' && s[i] != '\0'; i++)
		if (s[i] < 48 || s[i] > 57)
			/* it's not a digit, it might be a specifier, let's investigate */
			break;

	return (i);
}
