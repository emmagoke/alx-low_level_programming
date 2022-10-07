#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers. The array
 * created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
