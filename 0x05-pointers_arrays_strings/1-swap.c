#include "main.h"

/**
 * swap_int - Swap two integer values
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = 23,  *tmp;

	tmp = &n;
	*tmp = *b;
	*b = *a;
	*a = *tmp;
}
