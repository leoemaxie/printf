#ifndef _TEST_H_
#define _TEST_H_

/* includes */
#include <limits.h>
#include <stdio.h>
#include "../main.h"

void test_print_hex(va_list *ap);
void test_print_digit(va_list *ap);
void *test_create_digit_array(int n, int base);

#endif
