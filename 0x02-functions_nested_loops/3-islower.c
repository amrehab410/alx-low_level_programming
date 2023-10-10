#include "main.h"


/**
 *  * _islower - Checks if a character is lowercase.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}

