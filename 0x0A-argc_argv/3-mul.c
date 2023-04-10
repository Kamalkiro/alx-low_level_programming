#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplying 2 numbers
 * @argc: size of argv
 * @argv: array with size argc
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		int num = atoi(argv[1]);
		int mul = atoi(argv[2]);
	printf("%d\n", (num * mul));
	return (0);
	}
}
