#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c, d;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	j = 0;
	while (j < i)
	{
		c = s[i];
		d = s[j];
		s[i] = d;
		s[j] = c;
		j++;
		i--;
	}	
}
