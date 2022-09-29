#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of number n
 * @n: The number
 * Return: An integer
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
