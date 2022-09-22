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
	int i, s1_len, s2_len;
	int s1_a = 0, s2_a = 0;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (s1_len == 0)
	{
		s2_a = s2[0];
		return (s1_a - s2_a);
	}
	else if (s2_len == 0)
	{
		s1_a = s1[0];
		return (s1_a - s2_a);
	}
	else
	{
		for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
			if (s1[i] == s2[2])
			{
				continue;
			}
			else
			{
				s1_a = s1[i];
				s2_a = s2[i];
				/* substract the ascii value of the non-matching string */
				return (s1_a - s2_a);
			}
		}
	}
	return (0); /* The two strings are equal */
}