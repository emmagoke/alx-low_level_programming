#include <stdio.h>

/**
 * main - prints the number of command line arguments.
 * @argc: The number of command line arguments.
 * @argv: arrays of command line argument
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (**argv)
			count++;
	}
	printf("%d\n", count);
	return (0);
}
