#include <stdio.h>

/**
 * _strspn - Searching the string str2 in the string str1.
 * It returns the count of characters of str2 that are matched in the str1 
 * @s: The string we are searching in.
 * @accept: The string we are checking the index
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (s[i] == accept[j])
			{
				len += 1;
			}
		}
	}
	return (len);
}
