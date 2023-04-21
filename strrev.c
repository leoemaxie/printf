#include "main.h"

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
