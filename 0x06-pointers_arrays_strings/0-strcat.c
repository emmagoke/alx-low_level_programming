#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatinate to string together
 * @dest: The string to be added to
 * @src: The string we are adding
 * Return: a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len, src_len;

	dest_len = strlen(dest);
	src_len = strlen(src);
	for (i = 0; (i < src_len) && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
