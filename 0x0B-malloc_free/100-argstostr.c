#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		if (strlen(av[i]) > 1)
		{
			for (j = 0; j < (int)strlen(av[i]); j++)
				count += 1;
		}
		else
			count += 1;
	}
	printf("%d\n", count);
	if (count == 0)
		return (NULL);
	count += 2;
	con = malloc(count * sizeof(char));
	count++;
	i = 0;
	for (l = 0; l < ac; i++, l++)
	{
		if (strlen(av[l]) > 0)
		{
			for (j = 0; j < (int)strlen(av[l]); j++)
			{
				con[i] = av[l][j];
				i++;
			}
		}
		con[i] = '\n';
	}
	con[i] = '\0';
	return (con);
}
