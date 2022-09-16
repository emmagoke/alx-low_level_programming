#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The charater to be checked
 * Return: 1(True), 0(false)
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
