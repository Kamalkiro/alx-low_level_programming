#include "main.h"
/**
 * get_endianness - checking endiannes
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned long int i;

	i = 1;
	return (*(char *)&i);
}
