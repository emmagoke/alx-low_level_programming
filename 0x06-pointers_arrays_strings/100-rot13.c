#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate the character by 13 letters
 * @str: The string to be rotated
 * Return: a char pointer
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
		
		i++;
	}
	return (str);
}
