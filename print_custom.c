#include "main.h"

/**
 * print_rot13 - encodes a string into rot13 and prints it.
 *
 * @ap: Variadic argument from _printf.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list *ap)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(*ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[j] > 'z')
			_putchar(s[j]);

		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (a[j] == s[i])
					_putchar(b[i]);
			}
		}
	}

	return (i);
}
