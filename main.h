#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024;

/* includes */
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_t - Format structure.
 *
 * @print: Pointer to a print function for various specifiers.
 * @specifier: The specified format to use.
*/

typedef struct format_t
{
	void (*print)(va_list *ap);
	char specifier;
} format_t;


/* Declarations */
int check_percent(char c);
void print_digit(va_list *ap);
void print_hex(va_list *ap);
int _printf(const char *fmt, ...);
void _putchar(char c);
int _strlen(const char *s);
void _strrev(char *s);

format_t formatters[] = {
	{print_digit, 'd'}, {print_hex, 'x'}
};

#endif
