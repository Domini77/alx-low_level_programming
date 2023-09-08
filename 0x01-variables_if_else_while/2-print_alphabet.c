#include <stdio.h>
/**
 * main - Print the alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
