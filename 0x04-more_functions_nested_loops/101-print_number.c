#include <stdio.h>
#include "main.h"
void print_int(int n);

/**
 * print_number - This function prints an integer.
 * @n: 
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_int(n * (-1));
	}
	else
		print_int(n);
}

void print_int(int n)
{
	if (n > 9)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
