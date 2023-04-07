#include "main.h"
int palindrom_checker(char *s, int n, int m);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returning 1 or 0 depending on if palindrome or not
 * @s:string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrom_checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returning string length
 * @s:string
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s));
}

/**
 * palindrom_checker - checks reversed letters of strings
 * @s:string
 * @n:input
 * @m:measured lenght
 * Return: 1 or 0
 */
int palindrom_checker(char *s, int n, int m)
{
	if (*(s + n) == *(s + m - 1))
		return (0);
	if (n >= m)
	return (1);
n++;
return (palindrom_checker(s, n, m - 1));
}
