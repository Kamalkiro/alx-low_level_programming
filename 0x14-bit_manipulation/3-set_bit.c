#include "main.h"
/**
 * set_bit - setting value to 1
 * @n: input
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (1);
	return (!!(*n |= 1L << index));
}
