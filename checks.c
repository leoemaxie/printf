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

