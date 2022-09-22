#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copy a string from source to destination
 * @dest: The string to be over-written
 * @src: The source file that will write from
 * @n: Number of byte(s) to be copyed
 * Return: A char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* Over-writing any remaining char in dest 
	 * with null characters */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
