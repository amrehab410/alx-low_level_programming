#include <stdio.h>

/**
 *  *  *  *  *main - Entry point
 *   *   *   *   *Return:  Always 0.
 */
int main(void)
{
		int x;
		int y;
		int z;
		int i;

		for (x = '0' ; x <= '9' ; x++)
		{
			for (i = '0' ; i <= '9' ; i++)
			{
				for (y = '0' ; y <= '9' ; y++)
				{
					for (z = '0' ; z <= '9' ; z++)
					{
						if (y >= x && z > i)
						{
							putchar(x);
							putchar(i);
							putchar(' ');
							putchar(y);
							putchar(z);
							if (x == '9' && i == '8' && y == '9' && z == '9')
							{
								break;
							}
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		putchar('\n');
		return (0);
}

