#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Function parameter
 * Return: 1 0r 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
