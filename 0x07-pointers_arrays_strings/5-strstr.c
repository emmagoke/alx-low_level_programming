#include <stdio.h>

/**
 * _strstr - This function finds the first occurrence of the substring needle in 
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: The string to be checked
 * @needle: The substring to be checked.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, count = 0, i_n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				if (needle[count + 1] != '\0')
				{
					count = count + 1;
					i_n = i;
				}
			}
		}
	}
	if (needle[count + 1] == '\0')
		return (haystack + i_n);
	else
		return ('\0');
}
