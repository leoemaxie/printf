#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFF_SIZE 1024

/** Includes **/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

/** Boolean types **/
typedef short bool;
#define true 1
#define false 0

/**
 * struct format - Format structure.
 *
 * @print: Pointer to a print function for various specifiers.
 * @specifier: The specified format to use.
*/
typedef struct format
{
	int (*print)(va_list *ap);
	char specifier;
} fmt_t;

/***** Declarations *****/

/** Utils **/
int get_fmt_index(char c, int size, fmt_t *f);
int skip_chars(const char *s, int *start);
void set_start_index(int *start, int specifier_index,int fmt_index);

/** strings **/
int increase_formatted_strlen(void);
int _strlen(const char *s);
int str_printed_len(int fmt_index, va_list *ap, fmt_t *f);
void strrev(char *s);

/** print_base **/
int print_base(unsigned int n, unsigned int base, int alpha);
int print_bin(va_list *ap);
int print_hex(va_list *ap);
int print_hex_upper(va_list *ap);
int print_oct(va_list *ap);

/** print_nums **/
int print_dec(va_list *ap);
int print_int(va_list *ap);
int print_number(int n);
int print_unsigned(va_list *ap);

/** print_chars **/
int print_char(va_list *ap);
int print_str(va_list *ap);
int print_rev(va_list *ap);

/** print_addr **/
int print_addr(va_list *ap);
int print_base_addr(unsigned long int a);

/** print_custom **/
int print_rot13(va_list *ap);

/** write_output **/
int _putchar(int c);
int _puts(const char *s);

/** Formatters & Output **/
int print(const char *s, int *start, int size, va_list *ap, fmt_t *f);
int _printf(const char *fmt, ...);

#endif
