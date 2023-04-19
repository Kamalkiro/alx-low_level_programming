#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execution function given each element of array
 * @size: of array
 * @action: pointer
 * @array: int array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (array && action)
		while (x < size)
		{
			action(*(array + x));
			x++;
		}
}
