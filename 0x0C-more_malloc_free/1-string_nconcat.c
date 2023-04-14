#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatating 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to concat
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;
	if (n < y)
		point = malloc(sizeof(char) * (x + n + 1));
	else
		point = malloc(sizeof(char) * (x + y + 1));

	if (point == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		point[i] = s1[1];
	}
	for (j = 0; j < n && s2[j]; i++, j++)
	{
		point[i] = s2[j];
	}
	point[i] = '\0';

	return (point);
}
