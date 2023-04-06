#include "main.h"
/**
 * _pow_recursion - returns x to power of y
 * @x:value
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (x == 1)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
