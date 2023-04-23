#include "main.h"
#include "test.h"

/**
 * reverse_digit - reverses a digit.
 *
 * @n: The digit to reverse.
 *
 * Return: The reversed digit.
 */
int *test_create_digit_array(int n, int divisor)
{
	int i, j;
	int *p = create_digit_array(n, divisor);

	if (p == NULL)
		return (NULL);

	i = p[0];
	printf("No of elements: %d", i);
		for (j = 1; j < i; j++)
			_putchar(array[i]);
	free(p);
}

/**
 * print_digit - prints a number in base 10.
 *
 * @ap: The digit to print.
 *
 * Return: Nothing.
 */

int test_print_digit(int n)
{
	int i;
	int *array;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	array = create_digit_array(n, 10);
	if (array != NULL)
		for (i = 1; i < array[0]; i++)
			_putchar(array[i]);
	free(array);
}

/**
 * print_hex - prints a number as an hexadecimal.
 *
 * @ap: The digit to print.
 *
 * Return: Nothing.
 */
void test_print_hex(int n)
{
	int n = va_arg(*ap, int);
	int digit;

	if (n < 0)
		n = -n;
	/*
	   digit = reverse_digit(n);
	   while (digit / 16)
	   {
	   if (digit % 16 < 10)
	   _putchar(digit % 16 + 48);
	   else
	   _putchar(digit % 16 + 87);
	   digit /= 16;
	   }*/
}

