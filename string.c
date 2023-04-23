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
