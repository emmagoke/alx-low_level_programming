#include "main.h"

/**
 * print_most_numbers - Prints the all numbers from 0 to 9
 * except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i, newline = 10;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar(newline);
}
