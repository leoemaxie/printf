#include "main.h"

/**
 * _printf- fuction that roduces output according to a format
 * @format:string to be formated
 *
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	unsigned int k;
	va_list ap;

	va_start(ap, format);

	unsigned int r_value = 0;

	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			_putchar(format[k]);
		}
		else if (format[k + 1] == 'c')
		{
			print_char(&ap);
			k++;
		}
		else if (format[k + 1] == 's')
		{
			print_str(&ap);
			k++;
		}
		else if (format[k + 1] == '%')
		{
			_putchar('%');
			k++;
		}
	}
	return (r_value);
}
