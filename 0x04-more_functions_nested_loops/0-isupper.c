#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Function parameter
 * Return: 1 0r 0.
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
