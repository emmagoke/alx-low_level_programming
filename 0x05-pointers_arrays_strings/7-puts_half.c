#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, newline = 10;

	for (i = 0; str[i] != '\0'; i++)
	{}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar(newline);
	}
	else
	{
		for (j = (i + 1) / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar(newline);
	}
}
