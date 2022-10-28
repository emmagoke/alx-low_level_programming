#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to
 * an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * and b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, out = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		len += 1;
	}

	len--;
	while (b[i])
	{
		if (b[i] == '1')
			out += 1 << len;
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		len--;
		i += 1;
	}
	return (out);
}
