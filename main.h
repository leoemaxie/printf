#ifndef _MAIN_H_
#define _MAIN_H_

#define BUFFER_SIZE 1024;

/* includes */
#include <stdarg.h>
#include <unistd.h>

/* Declarations */
int _printf(const char *fmt, ...);
void _putchar(char c);
int _strlen(const char *s);
void _strrev(char *s);

#endif
