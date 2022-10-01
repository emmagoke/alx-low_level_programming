#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: The number of command line arguments
 * @argv: array of command line arguments
 * Return: 1(Failure), 0(Success)
 */
int main(int argc, char *argv[])
{
	int change, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[argc - 1]);
		while (n > 0)
		{
			if (n >= 25)
			{
				change += n / 25;
				n %= 25;
			}
			else if (n >= 10)
			{
				change += n / 10;
				n %= 10;
			}
			else if (n >= 5)
			{	change += n / 5;
				n %= 5;
			}
			else if (n >= 2)
			{	change += n / 2;
				n %= 2;
			}
			else
			{
				change++;
				n -= 1;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
