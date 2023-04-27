#ifndef _MAIN_H_
#define _MAIN_H_


#define BUFF_SIZE 1024

/** Includes **/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct flag - Flag structure for additional modification of the format
 * structure passed to printf.
 *
 * @hash: Hash flag (#).
 * @plus: Pkus flag (+).
 * @space: Spacr flag (' ').
*/
typedef struct flag
{
	int hash;
	int plus;
	int space;
} flag_t;

/**
 * struct format - Format structure.
 *
 * @print: Pointer to a print function for various specifiers.
 * @specifier: The specified format to use.
*/
typedef struct format
{
	int (*print)(va_list ap, flag_t *f);
	char specifier;
} fmt_t;

/***** Declarations *****/

/** print_base **/
int print_bin(va_list ap, flag_t *f);
int print_hex(va_list ap, flag_t *f);
int print_HEX(va_list ap, flag_t *f);
int print_oct(va_list ap, flag_t *f);

/** print_nums **/
int count_digits(int n);
int print_dec(va_list ap, flag_t *f);
int print_int(va_list ap, flag_t *f);
void print_number(int n);
int print_uint(va_list ap, flag_t *f);

/** print_chars **/
int print_char(va_list ap, flag_t *f);
int print_str(va_list ap, flag_t *f);

/** print_addr **/
int print_addr(va_list ap, flag_t *f);

/** print_custom **/
int print_rev(va_list ap, flag_t *f);
int print_rot13(va_list ap, flag_t *f);
int print_Str(va_list ap, flag_t *f);

/** get_fmt_print **/
int (*get_fmt_print(char c))(va_list ap, flag_t *f);

/** get_flag**/
int get_flag(char c, flag_t *f);

/** Converters **/
char *convert(unsigned long int n, int base, int alpha);
int handle_malloc(char *s);

/** write_output **/
int _putchar(int c);
int _puts(const char *s);

/** printf **/
int _printf(const char *fmt, ...);
#endif
