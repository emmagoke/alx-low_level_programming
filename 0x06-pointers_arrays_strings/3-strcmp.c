#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two string together
 * @s1: The first string
 * @s2: The second string
 * Return: An integer
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			/* Substracting the ascii values of the charater) */
			return (*s1 - *s2);
		}
	}
}
