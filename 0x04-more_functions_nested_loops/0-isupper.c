#include "main.h"

/**
 * _isupper - checks if a char is upper
 * @c: The character to be checked
 * Return: 1(True), 0(false)
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
