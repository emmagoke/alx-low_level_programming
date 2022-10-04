#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: a newly allocated space in memory which contains the contents
 * of s1, followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	unsigned int i;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;
	size2++;

	con = malloc((size1 + size2));
	if (con == NULL)
		return (NULL);

	i = 0;
	while (*s1 != '\0')
	{
		con[i] = *s1;
		s1 += 1;
		i++;
	}
	while (*s2 != '\0')
	{
		con[i] = *s2;
		s2 += 1;
		i++;
	}
	return (con);
}
