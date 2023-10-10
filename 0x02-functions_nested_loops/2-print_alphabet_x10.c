#include "main.h"


/**
 *  *  *  * print_alphabet_x10 - Prints "Holberton" followed by a new line
 */

void print_alphabet_x10(void)
{
	int x;
	int letter;

	for (x = 0; x < 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
