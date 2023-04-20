#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing opcodes
 * @argc: num of array
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, x = 0;
	int (*fp)(int, char **) = main;
	unsigned char res;

	num = atoi(argv[1]);

	if (argc != 2 || num < 0)
		printf("Error\n");
	if (argc != 2)
		exit(1);
	if (num < 0)
		exit(2);
	while (x < num)
	{
		res = *(unsigned char *)fp;
		printf("%.2x", res);
		printf(" ");
		fp++;
		x++;
	}
	printf("\n");
	return (0);
}
