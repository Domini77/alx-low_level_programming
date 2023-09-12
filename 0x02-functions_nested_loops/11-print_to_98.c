#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number to 98
 * @n: function parameter
 * Return: void.
 */
void print_to_98(int n)
{
	if (!(n > 98))
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
	}
	printf("\n");
	printf("\n");
}
