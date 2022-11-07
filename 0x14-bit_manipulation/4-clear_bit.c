#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index.
 * @n: The number whose bit is to be cleared.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int out;

	/* sizeof unsigned long int is 8: (8 * 8) -1) */
	if (n == NULL || index > 63)
		return (-1);

	out = (1 << index);
	*n = *n & ~out;
	return (1);
}
