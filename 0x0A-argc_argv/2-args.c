#include <stdio.h>

/**
 * main - prints all the arguments from the command line
 * except the first.
 * @argc: The number of command line arguments
 * @argv: Arrays of command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
