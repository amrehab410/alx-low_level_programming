#include "main.h"

/**
 *  * print_rev - Prints a string in reverse.
 *   * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int j, len = 0;

	while (s[len] != '\0')
		len++;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
