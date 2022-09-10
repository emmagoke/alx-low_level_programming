#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 48, comma = 44, space = 32;
	int newline = 10;

	while (num < 58)
	{
		putchar(num);
		if (num == 57)
		{
		}
		else
		{
			putchar(space);
			putchar(comma);
		}
		num++;
	}
	putchar(newline);
	return (0);
}
