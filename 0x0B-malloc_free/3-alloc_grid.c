#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returning pointer to array of integers
 * @width: first dimension
 * @height: second dimension
 * Return: pointer to array, NULL or 0
 */
int **alloc_grid(int width, int height)
{
	int **point;

	int l, dim;

	if (width <= 0 || height <= 0)
		return (NULL);
	point = malloc(sizeof(int *) * height);
	if (point == NULL)
		return (NULL);
	l = 0;
	while (height > l)
	{
		point[l] = malloc(sizeof(int) * width);

		if (point[l] == NULL)
		{
			while (l > 0)
			{
				free(point[l - 1]);
				l--;
			}
			free(point);
			return (NULL);
		}
		l++;
	}

	l = 0;
	while (height > l)
	{
		dim = 0;
		while (width > dim)
		{
			point[l][dim] = 0;
			dim++;
		}
		l++;
	}
	return (point);
}
