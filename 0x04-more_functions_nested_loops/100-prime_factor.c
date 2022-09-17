#include <stdio.h>

/**
 * _isprime - checks if number is prime
 * @n: the number to be checked
 * Return: 1(it is a prime), 0(not a prime)
 */

int _isprime(int n)
{
	int i;

	if (n == 0 || n == 1)
	{
		return (0);
	}
	else
	{
		for (i = 2; i < n / 2; i++)
		{
			if (n % 1 == 0)
			{
				return (0);
			}
		}
	}
	return (1);
}

/**
 * prime_factor - checks for the largest prime factor for a number
 * @n: The number to be checked
 * Return: The largest prime factor of n
 */

int prime_factor(int n)
{
	int i, largest = 1;

	if (n <= 0)
	{
		return (n);
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			if ((_isprime(i) == 1) && (i > largest))
			{
				largest = i;
			}
		}
		return (largest);
	}
}

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;

	printf("%d\n", prime_factor(n));
	return (0);
}
