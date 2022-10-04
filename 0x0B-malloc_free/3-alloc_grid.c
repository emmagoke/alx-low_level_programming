#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = malloc(width * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	return (array);
}
