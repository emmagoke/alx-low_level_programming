#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the execute of this file.
 * @argc: Argument count( Number of argument main
 * will recieve from the command line.
 * @argv: Arrays of the argument.
 * Return: ).
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	printf("\n");
	return (0);
}
