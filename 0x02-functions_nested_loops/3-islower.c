#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: The character to be checked
 *
 * Return: 1(lowercase) or 0(not lowercase)
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
