#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @ap: The string to print.
 * @f: The flag modifier.
 *
 * Return: The number of characters printed.
 */
int print_rev(va_list ap, flag_t *f)
{
	int i, len = 0;
	char *s = va_arg(ap, char *);

	(void)f;

	if (s == NULL)
		s = "(null)";

	while (s[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	return (len);
}

/**
 * print_Str - prints a string.
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 * this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 *
 * @ap: The string to print.
 * @f: The flag modifier.
 *
 * Return: The number of characters printed.
 */
int print_Str(va_list ap, flag_t *f)
{
	int i, len = 0;
	char *res;
	char *s = va_arg(ap, char *);

	(void)f;

	if (s == NULL)
		return (_puts("(null)"));

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_puts("\\x");
			len += 2;
			res = convert(s[i], 16, 55);
			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(s[i]);
	}
	free(res);

	return (len);
}

/**
 * print_rot13 - encodes a string into rot13 and prints it.
 *
 * @ap: Variadic argument from _printf.
 * @f: The flag modifier.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list ap, flag_t *f)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(ap, char *);

	(void)f;

	if (s == NULL)
		return (_puts("(null)"));

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
			_putchar(s[i]);

		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (s[i] == a[j])
				{
					_putchar(b[j]);
					break;
				}
			}
		}
	}

	return (i);
}
