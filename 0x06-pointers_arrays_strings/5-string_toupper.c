#include <stdio.h>
#include <string.h>

/**
 * string_toupper - converts string from lowercase to uppercase
 * @str: The string
 * Return: a string
 */
char *string_toupper(char *str)
{
	if (strlen(str) == 0)
	{
		return (str);
	}
	for ( ; *str != '\0'; str++)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
	}
	return (str);
}
