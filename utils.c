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

	p[0] = 1;
	while (n)
	{
		/* 48 is added because numbers in ASCI starts from 48 */
		p[no_of_elements + 1] = n % base + 48;
		no_of_elements++;
		n /= base;
	}
	p[0] = no_of_elements;

	return (p);
}

