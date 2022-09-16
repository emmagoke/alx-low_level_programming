#include "main.h"

/**
 * print_triangle - Print triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, newline = 10, dash = 35;
	int k, space = 32;

	if (size <=0 )
	{
		_putchar(newline);
	}
	else
	{
		for (i = 1; i < (size + 1); i++)
		{
			for (j = 0; j < (size - i); j++)
			{
				_putchar(space);
			}
			for (k = 0; k < i; k++)
			{
				_putchar(dash);
			}
			_putchar(newline);
		}
	}
}
