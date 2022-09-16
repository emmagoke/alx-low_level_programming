#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i, newline = 10;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(newline);
}
