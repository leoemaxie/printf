#include "main.h"

/**
 * check_percent - Determines whether a character is a percent
 *
 * @c: The character to check.
 *
 * Return: 1 if character is a percent, 0 otherwise.
*/
int check_percent(char c)
{
	if (c == '%')
		return (1);
	return (0);
}

/**
 * check_specifier - Checks whether a given specifier is valid.
 *
 * @c: The specifier.
 *
 * Return: -1 if the specifier is invalid, else, return index of the specifier.
 */
int check_specifier(char c)
{
	int i;
	int has_specifier = 0;

	for (i = 0; i < 5; i++)
	{
		if (formatters[i].specifier == c)
		{
			has_specifier = 1;
			break;
		}
	}

	if (has_specifier)
		return (i);

	return (-1);
}
