#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: The number to check
 *
 * Return: 1(positive), 0(zero), -1(for negaitive number)
 */
int print_sign(int n)
{
	int plus = 43, zero = 48, minus = 45;

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(minus);
		return (-1);
	}
}
