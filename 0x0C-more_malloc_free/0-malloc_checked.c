#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocating memory
 * @b: allocated size
 * Return: Returns the pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
