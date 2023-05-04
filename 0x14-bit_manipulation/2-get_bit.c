#include "main.h"
/**
 * git_bit - returning the value of bit
 * @n: bit
 * @index: index
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
