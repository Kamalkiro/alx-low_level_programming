#include <stdarg.h>
#include "variadic_functions.h"
/**
 * charp - printing char
 * @arg: argument
 */
void charp(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * intp - printing integer
 * @arg: argument
 */
void intp(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * floatp - printing float
 * @arg: argument
 */
void floatp(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * stringp - printing string
 * @arg: argument
 */
void stringp(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (!string)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 * print_all - printing anything
 * @format: array
 */
void print_all(const char * const format, ...)
{
	int x, y = 0;
	va_list arg;

	variable choice[] = {
		{'c', charp},
		{'i', intp},
		{'f', floatp},
		{'s', stringp},
		{'\0', '\0'} };
	char *sep = "";

	va_start(arg, format);
	while (format && format[y])
	{
		x = 0;
		while (choice[x].ch)
		{
			if  (choice[x].ch == format[y])
			{
				printf("%s", sep);
				choice[x].point(arg);
				sep = ", ";
			}
			x++;
		}
		y++;
	}
	va_end(arg);
	printf("\n");
}
