#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing opcodes
 * @argc: num of arrajy
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, x;
	char *fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	fp = (char *)main;

	for (; num--; )
	{
		printf("%02hhx%s", *fp++, num ? " " : "\n");
	}
	return (0);
}
