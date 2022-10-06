#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The number of argument
 * @av: The arrays of arguments.
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *con;
	int i, j, l, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
			for (j = 0; av[i][j]; j++)
				count += 1;
			count++; /* for '\n' */
	}
	if (count == 0)
		return (NULL);
	count += 1;
	con = malloc(count * sizeof(char));
	count++;
	i = 0;
	for (l = 0; l < ac; i++, l++)
	{

			for (j = 0; av[l][j]; j++)
			{
				con[i] = av[l][j];
				i++;
			}
		con[i] = '\n';
	}
	con[i] = '\0';
	return (con);
}
