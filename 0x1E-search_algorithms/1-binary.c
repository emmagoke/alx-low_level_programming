#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located or
 * If value is not present in array or if array is NULL returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		printf("Searching in array:");
		for (i = low; i <= high; i++)
		{
			printf(" %d", array[i]);
			if (i != high)
				printf(",");
		}
		printf("\n");
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		else if (array[middle] > value)
		{
			high = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
