#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenates s1, followed by
 * the first n bytes of s2, and null terminated.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of byte to be concatenated from s2.
 * Return: pointer shall point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	if (*s1 == NULL)
		*s1 = "";
	if (*s2 == NULL)
		*s2 = "";

	str = malloc((strlen(s1) + n + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
			str[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
