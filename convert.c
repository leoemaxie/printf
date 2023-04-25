#include "main.h"

/**
 * strrev - Reverses the characters in a string.
 *
 * @s: The string to reverse.
 *
 * Return: Nothing.
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
