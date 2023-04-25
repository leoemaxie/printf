#include "main.h"

/**
 * get_flag - Turns on the flag is printf detects a flag modifier.
 *
 * @c: The potential flag to check.
 * @f: Pointer to the flag structure.
 *
 * Return: 1 if a flag is present, 0 otherwise.
 */
int get_flag(char c, flag_t *f)
{
	int i = 1;

	switch (c)
	{
		case '#':
			f->hash = 1;
			break;
		case '+':
			f->plus = 1;
			break;
		case ' ':
			f->space = 1;
			break;
		default:
			i = 0;
	}

	return (i);
}
