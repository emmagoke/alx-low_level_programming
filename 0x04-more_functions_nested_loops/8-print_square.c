#include "main.h"

/**
 * print_square - Print hash square
 * @n: The number of times
 * Return: void
 */
void print_square(int n)
{
	int newline = 10, hash = 35;
	int i, j;

	if (n <= 0)
	{
		_putchar(newline);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(hash);
			}
			_putchar(newline);
		}
	}
}
