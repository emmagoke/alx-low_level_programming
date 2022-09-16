#include "main.h"

/**
 * print_diagonal - Print diagonal
 * @n: The number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int space = 32, newline = 10, dia = 92;
	int i, j;

	if (n <= 0)
	{
		_putchar(newline);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				_putchar(space);
			}
			_putchar(dia);
			_putchar(newline);
		}
	}
}
