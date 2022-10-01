#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of command line
 * arguments except the first.
 * @argc: The number of command line arguments
 * @argv: arrays of command line arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result = 1, i, x;

	if (argc < 2 && **argv)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			result *= x;
		}
		printf("%d\n", result);
		return (0);
	}
}
