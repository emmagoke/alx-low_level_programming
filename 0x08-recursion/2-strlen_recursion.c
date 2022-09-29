#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculate the len of the string s recursively
 * @s: The string
 * Return: The len of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	else
	{
		if (*s != '\0')
		{
			i = 1 + _strlen_recursion(s + 1);
		}
	}
	return (i);
}
