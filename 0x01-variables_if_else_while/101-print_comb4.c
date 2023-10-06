#include <stdio.h>

/**
 *  *  *  *main - Entry point
 *   *   *   *Return:  Always 0.
 */
int main(void)
{
	int x;
	int y;
	int i;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (i = '0' ; i <= '9' ; i++)
		{
			for (y = '0' ; y <= '9' ; y++)
			{
				if (i > x && y > i)
				{
					putchar(x);
					putchar(i);
					putchar(y);
					if (x == '7' && i == '8' && y == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
