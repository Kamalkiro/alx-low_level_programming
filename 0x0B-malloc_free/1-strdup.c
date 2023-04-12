#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returning pointer to space
 * @str: space
 * Return: Null
 */
char *_strdup(char *str)
{
	char *point;
	int i = 0, new = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		new++, i++;
	new++;

	point = malloc(sizeof(char) * new);

	if (point == NULL)
	return ("NULL\n");

	i = 0;
	while (i < new)
	{
		*(point + i) = *(str + i);
		i++;
	}
	return (point);
}
