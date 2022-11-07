#include <stdio.h>
#include "main.h"
void print_int(int n);

/**
 * print_number - This function prints an integer.
 * @n: The number to be printed.
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_int(-n);
	}
	else
		print_int(n);
}

/**
 * print_int - This is an helper function for print_number,
 * to print integer.
 * @n: The n to be printed.
 * Return: Nothing.
 */
void print_int(int n)
{
	if (n > 9)
		print_int(n / 10);
	_putchar((n % 10) + '0');
}
