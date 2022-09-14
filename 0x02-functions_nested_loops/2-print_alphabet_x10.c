#include "main.h"

/**
 * print_alphabet_x10 -  Prints lowercase alphabet 10 times
 *
 * Return: void(nothing)
 */
void print_alphabet_x10(void)
{
	int i = 0, letter, newline = 10;

	while (i < 10)
	{
		letter = 97;
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar(newline);
		i++;
	}
}
 
