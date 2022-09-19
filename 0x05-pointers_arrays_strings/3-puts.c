#include "main.h"

/**
 * _puts - print string to the screen
 * @str: the string to display
 * Return: void
 */
void _puts(char *str)
{
	int i, newline = 10;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(newline);
}
