#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)	
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = (i * j)
				if (j == 0)
					_putchar(k + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (k <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (k > 9 && k < 100)
					{
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else if (k >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
