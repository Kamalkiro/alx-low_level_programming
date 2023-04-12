#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenating 2 strings
 * @s1: first string
 * @s2: second one
 * Return: pointer to them or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *co;
	int i, conca;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	i = conca = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[conca] != '\0')
	conca++;
	co = malloc(sizeof(char) * (i + conca + 1));

	if (co == NULL)
	return (NULL);
	i = conca = 0;
	while (s1[i] != '\0')
	{
	co[i] = s1[i];
	i++;
	}

	while (s2[conca] != '\0')
	{
	co[i] = s2[conca];
	i++, conca++;
	}

	co[i] = '\0';
	return (co);
}
