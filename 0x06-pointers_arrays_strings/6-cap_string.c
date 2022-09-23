#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string
 * Return: a string
 */
char *cap_string(char *str)
{
	int i, newline = 10;
	int tab = 9, l_b = 123, r_b = 125;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 32 && str[i] <= 46) || (str[i] == newline || str[i] == tab || str[i] == l_b || str[i] ==  r_b))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
