#include "main.h"

/**
 * reverse_digit - reverses a digit.
 *
 * @n: The digit to reverse.
 *
 * Return: The reversed digit.
 */
int *create_digit_array(int n, int divisor)
{
	int *p = malloc(sizeof(int *));
	int no_of_elements = 0;

	if (p == NULL)
		return (NULL);

	p[0] = no_of_elements;
	while (n / divisor)
	{
		/* 48 is added because numbers in ASCI starts from 48 */
		p[no_of_elements + 1] = n % divisor + 48;
		n /= divisor;
		no_of_elements++;
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
		for (i = array[0]; i > 1; i--)
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
void print_hex(va_list *ap)
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
