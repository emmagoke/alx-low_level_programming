#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sletter = 97, cletter = 65;
	int newline = 10;

	while (sletter < 123)
	{
		putchar(sletter);
		sletter++;
	}
	while (cletter < 91)
	{
		putchar(cletter);
		cletter++;
	}
	putchar(newline);
	return (0);


}
