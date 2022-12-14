#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: The pointer to the dest string
 * @src: The pointer to string we are copying
 * @n: Number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
