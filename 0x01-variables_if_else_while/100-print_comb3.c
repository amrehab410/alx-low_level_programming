#include <stdio.h>

/**
 *  *  *main - Entry point
 *   *   *Return:  Always 0.
 */
int main(void)
{
	int x;
	int i;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (i = '0' ; i <= '9' ; i++)
		{
			if (i > x)
			{
				putchar(x);
				putchar(i);
				if (x == '8' && i == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
