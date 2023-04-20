#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searching for int
 * @array: array
 * @size: n of array
 * @cmp: pointer
 * Return: -1 or index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (x = 0; x < size; x++)
			{
				if (cmp(array[x]))
					return (x);
			}
			return (-1);
		}
		return (-1);
	}
	return (-1);
}
