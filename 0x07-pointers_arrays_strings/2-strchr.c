#include <stdio.h>

/**
 * _strchr - checks for the first occurrence of the character c in the string s
 * @s: The pointer to the string to be checked
 * @c: The character to be searched
 * Return: a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
