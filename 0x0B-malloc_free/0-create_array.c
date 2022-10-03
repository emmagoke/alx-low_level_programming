#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars, and
 * initializes it with a specific char.
 * @size: The number of charater to be created
 * @c: The character.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer = (char *)malloc(size * sizeof(c));
	unsigned int i;

	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		printf("%c\n", buffer[i]);
	}
	return (buffer);
}
