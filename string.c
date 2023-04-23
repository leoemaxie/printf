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
 * strrev - Reverses the characters in a string.
 *
 * @s: The string to reverse.
 *
 * Return: Nothing.
 */
void strrev(char *s)
{
	int i;
	int len = _strlen(s) - 1;

	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];
		int last = len - i;

		s[i] = s[last];
		s[last] = tmp;
	}
}
