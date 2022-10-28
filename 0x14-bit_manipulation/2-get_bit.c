#include "main.h"

/**
 * get_bit - This function gets the bit at this index
 * @n: The number to be search
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	if (n == 0)
		return (-1);
	return (n & 1);
}
