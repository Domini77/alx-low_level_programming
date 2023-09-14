#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: Function parameter
 * Return: 1 0r 0.
 */
int _isupper(int c)
{
	int i;
	
	for (i ='A'; i <= 'Z'; i++)
	{
		if (c == i)
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
