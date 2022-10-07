#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - creates a dynamically allocated memory
 * @b: The size of the memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
