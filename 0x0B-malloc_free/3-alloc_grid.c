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
	array = malloc(height * sizeof(int *));

	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			for (j = 0; j < width; j++)
			{
				if (array != NULL)
					array[i][j] = 0;
				else
				{
					while (i >= 0)
					{
						free(array[i]);
						i--;
					}
					free(array);
					return (NULL);
				}
			}
		}
		return (array);
	}
	else
		return (NULL);
}
