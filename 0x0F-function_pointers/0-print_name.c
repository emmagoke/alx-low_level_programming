#include <stdio.h>

/**
 * print_name - This function prints name
 * @name: The name to be printed.
 * @f: The pointer that points to the name to be printed.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
