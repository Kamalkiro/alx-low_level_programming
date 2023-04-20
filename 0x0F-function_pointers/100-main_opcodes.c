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

	num = atoi(argv[1]);
	if (argc < 2 || argc > 2 || num < 0)
		printf("Error\n");
	if (argc < 2 || argc > 2)
		exit(1);
	if (num < 0)
		exit(2);

	fp = (char *)main;

	for (x = 0; x < num; x++)
	{
		if (x == num - 1)
		{
			printf("%02hhx\n", fp[x]);
			break;
		}
	}
}
