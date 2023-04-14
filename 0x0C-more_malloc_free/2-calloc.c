#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocating memory
 * @nmemb: number
 * @size: size of elements
 * Return: pointing memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	unsigned int x;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	point = malloc(nmemb * size);

	if (point == NULL)
		return (NULL);
	while (x < nmemb * size)
	{
		*((char *)point + x) = 0;
		x++;
	}
	return (point);
}
