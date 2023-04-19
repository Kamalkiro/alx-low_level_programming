#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - printing name
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	for (; name && f ; )
	{
		f(name);
		break;
	}
}
