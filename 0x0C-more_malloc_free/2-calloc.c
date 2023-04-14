#include <stdlib.h>
#include "main.h"

/**
 * *_memset - filling the memory with a constant byte
 * @s: the memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocating memory for an array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);

	if (point == NULL)
		return (NULL);

	_memset(point, 0, nmemb * size);

	return (point);
}
