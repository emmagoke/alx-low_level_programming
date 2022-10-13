#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Checks the code
 * @argc: The number of command line arguments.
 * @argv: Arrays of command line arguments
 * Return: 0(Success), 98 or 99 or 100 (for Failure.)
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error2\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0
			&& strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0
			&& strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 && atoi(argv[3]) == 0)
			|| (strcmp(argv[2], "%") == 0 && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
