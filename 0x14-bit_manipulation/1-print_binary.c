#include "main.h"
void print_rec(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n < 1)
	{
		_putchar('0');
	}
	else
		print_rec(n);
}

/**
 * print_rec - This is an helper function for print_binary.
 * @n: The number to be used.
 * Return: Nothing.
 */
void print_rec(unsigned long int n)
{
	if (n < 1)
		return;
	print_rec(n >> 1);
	_putchar((n & 1) + '0');
}
