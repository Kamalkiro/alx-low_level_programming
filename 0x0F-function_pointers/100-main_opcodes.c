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
	int num;
	char *fp = (char *)main;

	num = atoi(argv[1]);

	if (argc != 2)
		printf("Error\n"), exit(1);
	if (num < 0)
		printf("Error\n"), exit(2);

	for (; num--; )
	{
		printf("%02hhx%s", *fp++, num ? " " : "\n");
	}
	return (0);
}
