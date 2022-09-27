#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonal of a square matrix
 * @a: The matrix
 * @size: The size of the square matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
	}
	for (i = size - 1; i < ((size * size) - 1); i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum, sum2);
}
