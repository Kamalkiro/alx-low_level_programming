#include "main.h"
/**
 * print_binary - printing binary representation
 * @n: input
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, bin;

	for (bin = 0; b != '\0'; )
	{
		if (n & 1L << --b)
		{
			putchar('1');
			bin++;
		}
		else if (bin != '\0')
			putchar ('0');
	}
	if (bin == '\0')
		putchar('0');
}
