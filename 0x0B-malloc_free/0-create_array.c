#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating arrays with specific chars
 * @size: array size
 * @c: char c
 * Return: Pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int i;

	point = malloc(sizeof(char) * size);
	if (size == 0 || point == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	point[i] = c;
	return (point);
}
