#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Declarations */
int _printf(const char *format, ...);
void _putchar(char c);
void _puts(char *c);
int print_string(char *str);
void print_char(va_list *ap);
void print_str(va_list *ap);
#endif
