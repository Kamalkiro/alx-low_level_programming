#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - printing strings
 * @separator: string
 * @n: number
 * @...: int
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	char *point = 0;
	int n1 = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(i, n);
	for (n1 = n; n1 > 0; n1--)
		{
			point = va_arg(i, char *);

			if (point != NULL)
				printf("%s", point);
			else
				printf("(nil)");

			if (separator != NULL && n1 != 1)
				printf("%s", separator);
		}
	printf("\n");

	va_end(i);
}
