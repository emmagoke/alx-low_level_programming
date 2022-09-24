#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints number n to the screen
 * @n: The number to be printed
 * Return: void
 */
void print_number(int n)
{
	int temp, sign = 1, numofdigit = 1;
	int out = 0;

	temp = n;
	if (n == 0)
		_putchar(n + '0');
	if (temp < 0)
	{
		sign = -1;
		temp *= sign;
	}
	while (temp > 0)
	{
		temp /= 10; /* temp = temp / 10 */
		numofdigit *= 10;
	}
	numofdigit /= 10;
	if (sign < 0)
		n *= sign;
	while (numofdigit > 0)
	{
		out = n / (int)numofdigit;
		if (sign < 0)
		{
			_putchar('-');
			sign = 1;
		}
		_putchar(out + '0');
		n %= (int)numofdigit;
		numofdigit /= 10;
	}
}
