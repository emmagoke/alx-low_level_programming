#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet
 * @c: The character to check
 *
 * Return: 1(True) or 0 (not an alphabet)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 90) || (c >= 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
