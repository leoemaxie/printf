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

	p[0] = no_of_elements;
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

/**
 * print_digit - prints a number in base 10.
 *
 * @ap: The digit to print.
 *
 * Return: Nothing.
 */
void print_digit(va_list *ap)
{
	int i;
	int n = va_arg(*ap, int);
	int *array;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	array = create_digit_array(n, 10);
	if (array != NULL)
		for (i = array[0]; i > 0; i--)
			_putchar(array[i]);

	free(array);
}

/**
 * print_hex - prints a number as an hexadecimal (base 16).
 *
 * @ap: The digit to print.
 *
 * Return: Nothing.
 */
void print_hex(va_list *ap)
{
	int i;
	int n = va_arg(*ap, int);
	int *array;

	if (n < 0)
		n = -n;

	array = create_digit_array(n, 16);
	if (array != NULL)
	{
		for (i = array[0]; i > 0; i--)
		{
			if (array[i] < 57)
				_putchar(array[i]);
			else
				_putchar(array[i] + 39); /* digits a - f */
		}
	}

	free(array);
}

