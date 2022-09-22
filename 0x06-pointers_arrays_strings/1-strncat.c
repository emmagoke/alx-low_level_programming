#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatinate dest with n bytes of src
 * @dest: The dest string
 * @src: The  string whiich n byte(s) will be taken from
 * @n: Number of bytes
 * Return: a char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);
	for (i = 0; (i < n) && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
