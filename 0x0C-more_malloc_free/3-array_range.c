#include <stdlib.h>
#include "main.h"
/**
 * array_range - creating array of int
 * @min: start included
 * @max: end included
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *point;
	int x = 0, y;

	if (min > max)
		return (NULL);
	y = (max - min + 1);

	point = malloc(sizeof(int) * y);
	if (point == NULL)
		return (NULL);

	while (x < y)
	{
		point[x] = min++;
		x++;
	}
	return (point);
}
