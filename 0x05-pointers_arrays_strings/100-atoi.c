#include "main.h"

/**
 * _atoi - converts a string to a number
 * @s: the string that contains the integer
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, count, result;
	int sign = 0; /* Positive */

	while (s[count] != '\0')
	{
		if (s[count] == '-')
			sign++;
		if (s[count] >= 48 && s[count] <= 57)
		{
			i++;
			result = (result * 10) + (s[count] - '0');
		}
		if (s[count] < 48 && s[count] > 57)
			break;
		count++;
	}
	if (i == 0)
		return (0);
	if (sign % 2 == 0)
		return (result);
	return (-1 * result);
}
