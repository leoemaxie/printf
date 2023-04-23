#include "test.h"

/**
 * test_create_digit_array - Tests the create_digit_array function.
 *
 * Return: Nothing.
 */
void *test_create_digit_array(void)
{
	int i, j;
	int *p = create_digit_array(8000, 10);

	if (p == NULL)
		return (NULL);

	i = p[0];
	printf("Size of the array is: %lu", sizeof(p));
	printf("No of elements: %d", i);

		for (j = 1; j < i; j++)
			_putchar(array[i]);
	free(p);
}

/**
 * test_print_digit - Tests the print_digit function.
 *
 * @ap: The digit to test print.
 *
 * Return: Nothing.
 */

void test_print_digit(va_list *ap)
{
	va_list *ap_cpy;
	va_copy(*ap_cpy, *ap);
	print_digit(ap_cpy);
}

/**
 * test_print_hex - Tests the print_hex function.
 *
 * @ap: The digit to test print.
 *
 * Return: Nothing.
 */
void test_print_hex(int n)
{
	va_list *ap_cpy;
	va_copy(*ap_cpy, *ap);
	print_hex(ap_cpy);
}
