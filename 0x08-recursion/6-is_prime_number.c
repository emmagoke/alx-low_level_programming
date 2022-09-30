#include <stdio.h>

int _divide(int x, int y);
/**
 * is_prime_number - checks if anumber n is prime
 * @n: The number to be checked
 * Return: 1 (if n is prime) or 0 (if not)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_divide(n, 2));
}

/**
 * _divide - Check if a number x is divisible
 * by y upto y + 1 < n
 * @x: An Integer
 * @y: An integer
 * Return: 1(if divisble) or 0 (if not)
 */
int _divide(int x, int y)
{
	if (y < x)
	{
		if (x % y == 0)
			return (0);
		else
			return (_divide(x, (y + 1)));
	}
	return (1);
}
