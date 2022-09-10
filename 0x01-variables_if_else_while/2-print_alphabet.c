#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97, newline = 10;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);
	return (0);
}
