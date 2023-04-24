#include "main.h"

/**
 * _putchar - Prints a character to stdout.
 *
 * @c: The character.
 *
 * Return: Nothing.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print - Prints any data in the specifued format.
 *
 * @s: The format string.
 * @start: Start index i.e the percent sign.
 * @size: Size of the formatter.
 * @ap: The variadic argument to format and print.
 * @f: Array of format structures.
 *
 * Return: Length of string printed.
 */
int print(const char *s, int *start, int size, va_list *ap, fmt_t *f)
{
	int specifier_index = skip_chars(s, start);
	char c = s[specifier_index];
	int fmt_index = get_fmt_index(c, size, f);

	set_start_index(start, specifier_index, fmt_index);

	if (fmt_index == -2)
		_putchar('%');

	return (str_printed_len(fmt_index, ap, f));
}

/**
 * print_number - prints a number in a specified base.
 *
 * @n: The number to print.
 * @base: The base of the number.
 *
 * Return: The number of digirs printed.
 */
int print_number(int n, int base, bool has_alpha, int alpha)
{
	int i;
	int *array;

	if (n < 0)
	{
		if (!has_alpha)
		{
			_putchar(45);
			n = -n;
		}
		else
			n = ~n + 1; /* Twos compliment */
	}

	array = create_digit_array(n, base);

	if (array != NULL)
	{
		for (i = array[0]; i > 0; i--)
		{
			if (array[i] > 57)
				_putchar(array[i] + alpha); /* alphabetic digits in base > 10 */
			else
				_putchar(array[i]);
		}
	}

	free(array);
	return (array[0]);
}


