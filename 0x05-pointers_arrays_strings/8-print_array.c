#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the content in an array
 * @a: The array
 * @n: The number of content in the array
 * Return : void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n + 1); i++)
	{
		if (i == n)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
