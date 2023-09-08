#include <stdio.h>
/**
 * main - Print the alphabet in lower case minus q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
