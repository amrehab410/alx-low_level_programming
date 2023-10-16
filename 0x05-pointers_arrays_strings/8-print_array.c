#include <stdio.h>
#include "main.h"

/**
 *  * print_array - prints n elements of an array of integers
 *   * followed by a new line
 *    * @a: array to be printed
 *     * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
