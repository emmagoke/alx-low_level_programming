#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @s: The string
 * Return: void;
 */
void puts2(char *s)
{
	int i, j,  newline = 10;

	for (j = 0; s[j] != '\0'; j++)
	{}
	j--;
	for (i = 0; i < j; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar(newline);
}
