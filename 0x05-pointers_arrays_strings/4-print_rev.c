#include "main.h"

/**
 * print_rev - Prints a reverse string
 * @s: The string
 * Return: void
 */
void print_rev(char *s)
{
	int i, newline = 10;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(newline);
}
