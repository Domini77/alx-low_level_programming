#include "main.h"
#include <stdio.h>
/**
 * main - print Fizz-Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf("Fizzbuzz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
	printf("\n");
	return (0);
}
