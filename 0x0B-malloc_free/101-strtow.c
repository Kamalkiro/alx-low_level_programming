#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wrdcnt - counting the nulber of words
 * @s: string
 * Return: number of words
 */
int wrdcnt(char *s)
{
	int x, j = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				j++;
		}
		else if (x == 0)
			j++;
	}
	j++;
	return (j);
}
/**
 * strtow - splitting string
 * @str: string
 * Return: pointer to array or NULL
 */
char **strtow(char *str)
{
	int x = 0, y = 0, z = 0, i = 0, j = 0, ln = 0;
	char **pt;

	if (str == NULL || *str == '\0')
		return (NULL);
	j = wrdcnt(str);
	if (j == 1)
		return (NULL);
	pt = malloc((j + 1) * sizeof(char *));
	if (pt == NULL)
		return (NULL);
	pt[j - 1] = NULL;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 0; str[x + y] != ' ' && str[x + y]; y++)
				;
			pt[ln] = (char *)malloc(y * (sizeof(char)));
			if (pt[ln] == NULL)
			{
				for (z = 0; z < ln; z++)
					free(pt[z]);
				free(pt[j - 1]);
				free(pt);
				return (NULL);
			}
			for (i = 0; i < y; i++)
				pt[ln][i] = str[x + i];
			pt[ln][i] = '\0';
			ln++;
			x += y;
		}
		else
			x++;
	}
	return (pt);
}
