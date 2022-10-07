#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This function reallocates a memory block
 * using malloc and free
 * @ptr: The pointer to be reallocated.
 * @old_size: The current size of the pointer.
 * @new_size: The new size of the pointer.
 * Return: a pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *aptr = (char *)ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return  (malloc(new_size));
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		nptr[i] = aptr[i];
	}
	free(ptr);
	return (nptr);
}
