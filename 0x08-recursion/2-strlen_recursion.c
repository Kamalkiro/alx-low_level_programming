#include "main.h"
/**
 * _strlen_recursion - returning lenghts of string
 * @s: string
 * Return:lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return(0);
	}
	else
	{
		return (1 + _strlen_recursion(s));
	}
}
