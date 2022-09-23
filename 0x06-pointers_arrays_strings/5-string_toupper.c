#include <stdio.h>
#include <string.h>

/**
 * string_toupper - converts string from lowercase to uppercase
 * @str: The string
 * Return: a string
 */
char *string_toupper(char *str)
{
	/*
	* for ( ; *str != '\0'; str++)
	*{
	*	if (*str >= 97 && *str <= 122)
	*	{
	*		*str -= 32;
	*	}
	*}
	*return (str);
	*/
	int i;

	if (strlen(str) == 0)
	{
		return (str);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
		}
		return (str);
	}
}
