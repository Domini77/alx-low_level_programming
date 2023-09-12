#include "main.h"
/**
 * times_table - Print the n times table.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, product;
	if ( n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (!(product > 9))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product > 99)
				{
					_putchar((product / 100) + '0');
					_putchar(((product/ 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			_putchar('\n');
		}
		_putchar('\n');
	}
	/**else
	{
		_putchar(' ');
	}
	*/

}
