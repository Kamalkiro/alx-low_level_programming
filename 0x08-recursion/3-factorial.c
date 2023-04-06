#include "main.h"
/**
 * factorial - returning the factorial
 * @n:number input
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
