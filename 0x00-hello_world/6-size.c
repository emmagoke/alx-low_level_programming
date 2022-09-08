#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int d;
	long long int l;

	printf("Size of a char: %lo byte(s)\n", sizeof(char));
	printf("Size of an int: %lo byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lo byte(s)\n", sizeof(float));
	return (0);
}
