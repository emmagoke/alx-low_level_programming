#include  "main.h"

/**
 * main - Contains print_alphabet, that prints
 * alphabet in lowercase
 *
 * Return: 0(Success)
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
