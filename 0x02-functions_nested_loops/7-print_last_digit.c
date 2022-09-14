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
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		_putchar((-1 * lastd) + '0');
		return (-1 * lastd);
	}
}
