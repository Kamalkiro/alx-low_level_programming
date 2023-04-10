#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adding positive numbers
 * @argc:size of argv
 * @argv:array
 * Return: Result of sum, 1 or 0
 */
int main(int argc, char *argv[])
{
	int num1 = 1, num2, sum = 0;

	char *point;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (argv[num1])
	{
		num2 = strtol(argv[num1], &point, 10);
		if (*point)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += num2;
		num1++;
	}
	printf("%d\n", sum);
	return (0);
}
