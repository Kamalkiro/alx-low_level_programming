#include "main.h"

int pm(int n, int on);

/**
 * is_prime_number - returning 1 if int is prime nb
 * @n:number inputed
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	return (pm(n, n - 1));
}

/**
 * pm - divises number to check if prime
 * @on: other number
 * @n:number inputed
 * Return: 1 or 0
 */
int pm(int n, int on)
	{
		if (on == 1)
		{
			return (1);
		}
		if (n % on == 0)
		{
			return (0);
		}
		return (pm(n, on - 1));
	}
