#include "main.h"
/**
 * flip_bits - returning bits number
 * @n: input
 * @m: input
 * Return: bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int i;

	for (i = 0; diff != '\0'; )
	{
		if (diff & 1ul)
			i++;
		diff = diff >> 1;
	}
	return (i);
}
