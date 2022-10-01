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
	int result = 1, i, j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = strtol(argv[1], NULL, 10);
		j = strtol(argv[2], NULL, 10);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
}
