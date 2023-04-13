#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concentrating arguments
 * @ac: argc
 * @av: argv
 * Return: pointer concentrating arrays
 */
char *argstostr(int ac, char **av)
{
	size_t j;
	int i, x, y;
	char *spoint;

	if (ac == 0 || av == NULL)
	return (NULL);

	y = 0;
	for (i = 0; i < ac; i++)
	{
	y += strlen(av[i]) + 1;
	}

	spoint = malloc(sizeof(char) * y);
	if (spoint == NULL)
	{
		return (NULL);
	}

	x = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			spoint[x++] = av[i][j];
		}
		spoint[x++] = '\n';
	}
	spoint[x - 1] = ('\0');

	return (spoint);
}

/**
 * test - testing
 * @argc: number of command line
 * @argv: pointer
 * Return: points using printf (I think printf is allowed for this one)
 */
int test(int argc, char **argv)
{
	char *spoint = argstostr(argc - 1, argv + 1);

	if (spoint == NULL)
		return (1);

	printf("%s", spoint);

	free(spoint);
	return (0);
}
