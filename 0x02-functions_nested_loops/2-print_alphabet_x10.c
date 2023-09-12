#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lower case x10.
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 48; b <= 57; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
