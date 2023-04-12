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
	unsigned int i = 0;

	if (size == 0)
	{
		return ("NULL\n");
	}
	point = malloc(sizeof(char) * size);

	if (point == NULL)
	{
		return ("NULL\n");
	}
	for (i = 0; i < size;)
	{
		point[i] = c;
		i++;
	}
	point[size] = '\0';

	return (point);
}
