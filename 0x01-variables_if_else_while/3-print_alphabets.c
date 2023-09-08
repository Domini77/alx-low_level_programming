#include <stdio.h>
/**
 * main - Print the alphabet in lower case and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 65; ALPHA <= 90; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
