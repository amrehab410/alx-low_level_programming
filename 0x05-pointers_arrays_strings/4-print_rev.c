#include "main.h"

/**
 *  * print_rev - Prints a string in reverse.
 *   * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int i = 0, j, len;

	while (s[i] != '\0')
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
