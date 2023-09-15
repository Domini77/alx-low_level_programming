#include "main.h"
/**
 * main - ch
 *
 * Return: 
 */
void print_diagonal(int n)
{
	int c;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
