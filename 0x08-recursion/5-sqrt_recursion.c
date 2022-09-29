#include <stdio.h>

int square(int x, int y);
/**
 * _sqrt_recursion - Finds the square root of n
 * @n: The number
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - checks if y is the sqaure root of x
 * @x: The square
 * @y: The square root
 * Return: Integer
 */
int square(int x, int y)
{
	int result = y * y;

	if (result > x)
		return (-1);
	else if (result == x)
		return (y);
	return (square(x, (y + 1)));
}
