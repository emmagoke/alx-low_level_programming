#include <stdio.h>

/**
 * _strspn - compute the number of bytes in the initial segment of s
 * @s: The string we are searching in.
 * @accept: The string we are checking the index
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			break;
		}
	}
	return (i + 1);
}
