#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums parameters
 * @n: number
 * @...: to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = 0, n1 = n;
	va_list i;

	if (n == 0)
		return (0);
	va_start(i, n);
	for (; n1--; )
		x += va_arg(i, int);
	va_end(i);
	return (x);
}
