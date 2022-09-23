#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337. by
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: The string to be encoded
 * Return: a char pointer(string )
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		while (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		while (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		while (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		while (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
