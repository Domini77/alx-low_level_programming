#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case.
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
