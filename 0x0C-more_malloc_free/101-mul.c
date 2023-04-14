#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _puts - printing string
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}
/**
 * _atoi - converting string to int
 * @s: char
 * Return: int
 */
int _atoi(const char *s)
{
	int minus = 1;
	unsigned long int ret = 0, n1 = 0, i = 0;

	while (!((s[n1]) >= '0' && s[n1] <= '9'))
	{
		if (s[n1] == '-')
		{
			minus *= -1;
		}
		n1++;
	}
	for (i = n1; s[i] >= 48 && s[i] <= 57; i++)
	{
		ret *= 10;
		ret += (s[i] - 48);
	}
	return (minus * ret);
}
/**
 * print_int - prints int
 * @n : nummber
 * Return: int
 */
void print_int(unsigned long int n)
{
	unsigned long int iter = 1, i = 0, ret;

	while (n / iter > 9)
	{
		iter *= 10;
		i++;
	}
	for (; iter >= 1; n %= iter, iter /= 10)
	{
		ret = n / iter;
		_putchar('0' + ret);
	}
}
/**
 * main - multiplies
 * @argc: num
 * @argv: argument
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		_puts("Error'\n'");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
