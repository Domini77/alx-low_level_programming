#include "main.h"
/**
 * _puts - Function
 * @s: Function parameter
 * Return: void
 */
void _puts(char *s)
{
	int c;
	
	for (c = 0; s[c] !='\0'; c++)
		_putchar(s[c]);
		_putchar('\n');
}
