#include <stdio.h>
#include "main.h"
/*
 * _strlen - Prints the length of a string
 * @s: Function parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = len +1;
	}
	return(len);
}
