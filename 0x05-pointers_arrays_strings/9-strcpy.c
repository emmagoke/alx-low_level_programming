#include "main.h"

/**
 * _strcpy - Copy a string from one pointer to another
 * @dest: The destination pointer
 * @src: The string being copy
 * Return: Returns a string
 */
char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return dest;
}
