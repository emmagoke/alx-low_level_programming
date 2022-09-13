#include  "main.h"

/**
 * print_alphabet - alphabet in lowercase, using ascii,
 * followed by new line
 *
 * Return: void (nothing)
 */
void print_alphabet(void)
{
	int letter = 97, newline = 10;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(newline);
}
