#include <unistd.h>
#include "io.h"

/**
 * _putchar - Prints a character to stdout.
 *
 * @s: The character.
 *
 * Return: Nothing.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
