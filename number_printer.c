#include "main.h"

/**
 * print_digit - prints a number in a specified base.
 *
 * @n: The number to print.
 * @base: The base of the number.
 *
 * Return: Nothing.
 */
void print_number(int n, int base)
{
	int i;
	int *array;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	array = create_digit_array(n, base);

	if (array != NULL)
	{
		for (i = array[0]; i > 0; i--)
		{
			if (array[i] > 57)
				_putchar(array[i] + 39); /* alphabetic digits in base > 10 */
			else
				_putchar(array[i]);
		}
	}

	free(array);
}

/**
 * print_bin - prints a number in base 2.
 *
 * @ap: The number to print.
 *
 * Return: Nothing.
 */
void print_bin(va_list *ap)
{
	int i;
	int n = va_arg(*ap, int);

	print_number(n, 2);
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

	print_number(n, 10);
}

/**
 * print_hex - prints a number as an hexadecimal (base 16).
 *
 * @ap: The number to print.
 *
 * Return: Nothing.
 */
void print_hex(va_list *ap)
{
	int i;
	int n = va_arg(*ap, int);

	print_number(n, 16);

}
