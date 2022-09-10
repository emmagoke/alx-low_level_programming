#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 48, letter = 97;
	int newline = 10;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (letter < 103)
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);
	return (0);
}
