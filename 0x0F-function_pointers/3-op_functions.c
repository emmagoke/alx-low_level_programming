#include <stdio.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
