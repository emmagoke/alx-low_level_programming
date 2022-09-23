#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate the character by 13 letters
 * @str: The string to be rotated
 * Return: a char pointer
 */
char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 13) % 26;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 13) % 26;
		}
		i++;
	}
	return (str);
}
