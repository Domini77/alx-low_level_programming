#include "main.h"
/**
 * print_diagonal - Draws a diagonal
 * @n: Function parameter
 * Return: void.
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
