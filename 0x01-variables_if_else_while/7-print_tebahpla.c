#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 122, newline = 10;

	while (num > 96)
	{
		putchar(num);
		num--;
	}
	putchar(newline);
	return (0);
}
