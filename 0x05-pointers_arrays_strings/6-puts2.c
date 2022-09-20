#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with 
 * the first character, followed by a new line.
 * @str: The string
 * Return: void;
 */
void puts2(char *s)
{
	int i, newline = 10;

	for (i = 0; s[i] != '\0'; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar(newline);
}
