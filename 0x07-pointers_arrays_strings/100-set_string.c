#include <stdio.h>

/**
 * set_string - Set the value of a pointer to a char
 * @s: The pointer to be set
 * @to: The char we are setting with.
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
