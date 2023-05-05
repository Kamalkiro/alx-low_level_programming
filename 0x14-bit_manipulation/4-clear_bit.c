#include "main.h"
/**
 * clear_bit - sets bit to 0
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, bit;

	bit = (sizeof(unsigned long int) * 8);
	i = 1;
	if (index > bit)
		return (-1);
	i = ~(i << index);
	*n = (*n & i);
	return (1);
}
