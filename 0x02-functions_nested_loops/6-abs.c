#include "main.h"

/**
 * _abs - Cnverts a number to it absolute value
 * @n: The number to be convert
 *
 * Return: return the absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
