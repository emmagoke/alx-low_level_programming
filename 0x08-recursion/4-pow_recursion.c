#include <stdio.h>

/**
 * _pow_recursion - Calculate x raised to the power of y
 * @x: The number
 * @y: The power
 * Return: An integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
