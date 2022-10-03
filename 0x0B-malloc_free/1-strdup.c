#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: The string (the parameter)
 * Return: A pointer r NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	dup = (char *)malloc(size);

	for (i = 0; i < size; i++)
		dup[i] = str[i];

	if (dup == 0)
		return (NULL);
	return (dup);
}
