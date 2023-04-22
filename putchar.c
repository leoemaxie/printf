#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character to stdout.
 *
 * @c: The character.
 *
 * Return: Nothing.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
