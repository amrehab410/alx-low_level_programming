#include <stdio.h>

/**
 *  *  *main - Entry point
 *   *   *Return:  Always 0.
 */
int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
		putchar(',');
		if (x == 9)
		{
			break;
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
