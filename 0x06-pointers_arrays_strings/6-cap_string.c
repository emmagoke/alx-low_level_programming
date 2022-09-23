#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string
 * Return: a string
 */
char *cap_string(char *str)
{
	int i, newline = 10, space = 32;
	int l_b = 123, r_b = 125;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == space || str[i] == '\t' || str[i] == '.' || str[i] == '"'
					|| str[i] == '?' || str[i] == '(' || str[i] == ')'
					|| str[i] == newline || str[i] == '!'
					|| str[i] == l_b || str[i] ==  r_b))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
