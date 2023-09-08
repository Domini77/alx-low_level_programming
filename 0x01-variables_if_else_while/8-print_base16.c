#include <stdio.h>
/**
 * main - Print the number 0-9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
