#include "main.h"

/**
 * create_digit_array - Creates an array of digits that constitute a given
 * number.
 *
 * @n: The number to break to its digits.
 * @base: The base of the number.
 *
 * Return: A pointer to the array of digits
 */
int *create_digit_array(int n, int base)
{
	int *p = malloc(sizeof(int *));
	int no_of_elements = 0;

	if (p == NULL)
		return (NULL);

	while (n)
	{
		/* 48 is added because numbers in ASCI starts from 48 */
		p[++no_of_elements] = n % base + 48;
		n /= base;
	}

	p[0] = no_of_elements;

	return (p);
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
