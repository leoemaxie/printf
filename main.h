#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024

/* includes */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
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
} fmt_t;


/* Declarations */
int check_percent(char c);
int *create_digit_array(int n, int base);
void print_char(va_list *ap);
void print_digit(va_list *ap);
void print_hex(va_list *ap);
void print_str(va_list *ap);
void print_format(int index, va_list *ap, fmt_t *f);
int _printf(const char *fmt, ...);
void _putchar(char c);
int skip_chars(const char *s, int *start, int size, fmt_t *f);
int _strlen(const char *s);
void _strrev(char *s);

#endif
