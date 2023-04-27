#include "main.h"

/**
 * convert - Converts a number to a given basw.
 *
 * @n: The number to convert.
 * @base: The base to convert the number into.
 * @alpha: The alphabetic numbers of the base if any.
 *
 * Return: A string of the converted digits.
 */
char *convert(unsigned long int n, int base, int alpha)
{
	int i = 0, j = 0;
	char s[50];
	char *cpy;

	while (n)
	{
		if (n % base > 9)
			s[i++] = n % base + alpha;
		else
			s[i++] = n % base + 48;
		n /= base;
	}

	cpy = malloc(i);

	if (cpy == NULL)
		return (0);

	for (; i > 0; j++)
		cpy[j] = s[--i];
	cpy[j] = '\0';

	return (cpy);
}

/**
 * handle_malloc - Handles memory allocation.
 *
 * @s: The string to handle allocation.
 *
 * Return: Number of bytes printed else return 0.
 */
int handle_malloc(char *s)
{
	int count = 0;

	if (s == NULL)
		return (_puts("(nil)"));

	count += _puts(s);
	free(s);
	return (count);
}
