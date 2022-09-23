#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337. by
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: The string to be encoded
 * Return: a char pointer(string )
 */
char *leet(char *str)
{
	char s[] = "a4e3o0t7l1";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j += 2)
		{
			if (str[i] == s[j] || str[i] == (s[j] - 32))
			{
				str[i] = s[j + 1];
				break;
			}
		}
		i++;
	}
	return (str);
}
