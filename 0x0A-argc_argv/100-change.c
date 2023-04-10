#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing the minimum number of a coin
 * @argc: size of argv
 * @argv: array
 * Return: Error, 0 or 1
 */
int main(int argc, char *argv[])
{
	int coin, number, change = 0, sum_of_change = 0;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}
	for (number = 0; number < 5 && coin >= 0; number++)
	{
		change = 0;
		while (coin >= values[number])
		{
			change++;
			coin -= values[number];
		}
		sum_of_change += change;
	}
	printf("%d\n", sum_of_change);
	return (0);
}
