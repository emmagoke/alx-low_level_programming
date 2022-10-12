#include <stdio.h>

/**
 * int_index - This function searches for an integer.
 * @array: The array to be worked upon.
 * @size is the number of elements in the array array
 * @cmp is a pointer to the function to be used to compare values.
 * Return: the index of the first element for which the
 * cmp function does not return 0. If no element matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
