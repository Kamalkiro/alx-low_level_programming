#include "main.h"
/**
 * binary_to_uint - converting binary to int
 * @b: binary
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	if (b == NULL)
		return (0);
	for (x = 0; *b != '\0'; )
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = x * 2 + (*b++ - '0');
	}
	return (x);
}
