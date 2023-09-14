#include "main.h"
/**
 * print_line - Draw a straight line
 * @n: function parameter
 * Return: Void.
 */
void print_line(int n)
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
			_putchar(45);
		}
		_putchar('\n');
	}
}

