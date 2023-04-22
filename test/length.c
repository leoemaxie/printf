#include "main.h"
#include <stdio.h>

int main()
{	
	fmt_t formatters[] = {
		{print_digit, 'd'}, {print_hex, 'x'}, {print_digit, 's'}
	};
	printf("%i", get_formatters_length(formatters));
}
