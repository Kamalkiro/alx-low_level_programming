#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - printing numbers
 * @separator: string
 * @n: num of int
 * @...: int
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	int n1 = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(i, n);
	for (; n1--; )
		printf("%d%s", va_arg(i, int), n1 ? (separator ? separator : "") : "\n");
	va_end(i);
}
