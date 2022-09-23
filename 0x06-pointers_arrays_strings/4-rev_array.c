#include <stdio.h>

/**
 * reverse_array - reverse an array
 * @a: The array
 * @n: Number of element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
	}
}
