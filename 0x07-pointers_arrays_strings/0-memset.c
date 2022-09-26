#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: address to the string to be fill
 * @b: The string use to fill
 * @n: The number of bytes to be filled with
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int  n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
