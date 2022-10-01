#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the addition of commanf line
 * arguments excluding the first.
 * @argc: The number of command line arguments
 * @argv: arrays of command line arguments
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, x, j;

	if (argc <= 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			x = strtol(argv[i], NULL, 10);
			sum += x;
		}
		printf("%d\n", sum);
		return (0);
	}
}
