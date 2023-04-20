#include <stdlib.h>
#include "main.h"

/**
 * _atoi_digit - converting char to integer.
 * @x: character.
 * Return: integer.
 **/
int _atoi_digit(char x)
{
	unsigned int r;

	if (x <= '9' && x >= '0')
		r = x - '0';
	return (r);
}
/**
 * _isNumber - check if num.
 * @argv: Pointer.
 * Return: 0.
 **/
int _isNumber(char *argv)
{
	int x;

	for (x = 0; argv[x]; x++)
		if (argv[x] < 48 || argv[x] > 57)
			return (1);
	return (0);
}
/**
 *_calloc - allocating array.
 * @nmemb: number.
 * @size: size.
 * Return: pointer.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < (size * nmemb); x++)
		ptr[x] = '0';

	return (ptr);
}
/**
 * mul_array - multiplying.
 * @a1: array.
 * @len1: length.
 * @a2: array.
 * @a3: array.
 * @len3: length.
 * Return: pointer.
 **/
void *mul_array(char *a1, int len1, char a2, char *a3, int len3)
{
	int m = 0, x, z;

	z = len3;
	for (x = len1 - 1; x >= 0 ; x--)
	{
		m += (a1[x] - '0') * (a2 - '0') + (a3[z] - '0');
		a3[z] = (m % 10) + '0';
		m /= 10;
		z--;
	}

		while (m != 0)
		{
			m += a3[z] - '0';
			a3[z] = (m % 10) + '0';
			m /= 10;
			z--;
		}

	return (a3);
}
/**
 * print_array - printing array.
 * @nb: number.
 * @a: array.
 **/
void print_array(char *a, int nb)
{
	int x = 0;

	while (a[x] == '0' && (x + 1) < nb)
	{
		x++;
	}
	for (; x < nb; x++)
	{
		_putchar(a[x]);
	}
	_putchar('\n');
}
/**
 *main - program that multiplies two positive numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int x, c, len1, len2, len3;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *res;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (x = 0; x < 6; x++)
		{
			_putchar(E[x]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	len3 = len1 + len2;
	res = _calloc(len3, sizeof(int));
	if (res == NULL)
	{
		free(res);
		return (0);
	}
	for (x = len2 - 1, c = 0; x >= 0; x--)
	{
	res = mul_array(argv[1], len1, argv[2][x], res, (len3 - 1 - c));
	c++;
	}
	print_array(res, len3);
	free(res);
	exit(EXIT_SUCCESS);
	return (0);
}
