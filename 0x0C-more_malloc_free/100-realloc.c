#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocating memory block
 * @ptr: pointer
 * @old_size: size of memory
 * @new_size: new size of memory
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point1;
	char *old_point;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	point1 = malloc(new_size);
	if (!point1)
	{
		return (NULL);
	}
	old_point = ptr;
	if (new_size < old_size)
	{
		point1[x] = old_point[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
		{
			point1[x] = old_point[x];
		}
	}
	free(ptr);
	return (point1);
}
