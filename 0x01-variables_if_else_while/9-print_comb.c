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
		if (x == 9)
		{
			putchar(x);
			break;
		}
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
