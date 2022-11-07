#include "main.h"
unsigned int count(unsigned long n);

/**
 * flip_bits - This function calculate the number of bits to be flip.
 * @n: The first number
 * @m: The second number.
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count(n ^ m));
}

/**
 * count - An helper function for flip_bits
 * @n: The number.
 * Return: The number of bits(1) in the n.
 */
unsigned int count(unsigned long n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
