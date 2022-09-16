#include "main.h"

/**
 * print_line - Print _ n times
 * @n: The number of times
 * Return: void
 */
void print_line(int n)
{
	int line = 95, newline = 10, i;

	if (n <= 0)
	{
		_putchar(newline);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(line);
		}
		_putchar(newline);
	}
}
