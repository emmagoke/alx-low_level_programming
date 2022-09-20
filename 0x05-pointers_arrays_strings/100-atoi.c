#include "main.h"

/**
 * _atoi - converts a string to a number
 * @s: the string that contains the integer
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, n, sign;

	for (i = 0; s[i] == ' ' || s[i] == '\n' || s[i] == '\n'; i++)
		;
	sign = 1;
	if (s[i] == '+' || s[i] == '-')
		sign = (s[i++] == '+') ? 1 : -1;
	for (n = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + s[i] - '0';
	return (sign * n);
}
