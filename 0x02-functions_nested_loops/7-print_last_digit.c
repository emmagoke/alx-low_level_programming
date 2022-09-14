#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Get the last digit of the number
 * @n: The number involved
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd >= 0)
	{
		printf("%d", lastd);
		return (lastd);
	}
	else
	{
		printf("%d", -1 * lastd);
		return (-1 * lastd);
	}
}
