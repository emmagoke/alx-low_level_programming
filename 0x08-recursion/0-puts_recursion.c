#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string literal recursively
 * @s: The string literal
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}

}
