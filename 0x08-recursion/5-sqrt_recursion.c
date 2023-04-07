#include "main.h"
/**
 * ansqrfu - ANother SQuaRed Root FUnction
 * @n:number input
 * @potrt: potential root
 * Return: squared root
 */
int ansqrfu(int n, int potrt)
{
	if (potrt * potrt > n)
	{
		return (-1);
	}
	else if (potrt * potrt == n)
	{
		return (potrt);
	}
	return (ansqrfu(n, potrt + 1));
}

/**
 * _sqrt_recursion - returning the natural square root of a number
 * @n:number input
 * Return: squar root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ansqrfu(n, 0));
}
