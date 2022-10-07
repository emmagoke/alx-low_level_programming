#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb
 * elements of size bytes each
 * @nmemb: The number of element of the array.
 * @size: The size of each element of the array
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *aptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	aptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		aptr[i] = 0;

	return (ptr);
}
