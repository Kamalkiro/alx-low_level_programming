#include <stdio>
#include "main.h"
/**
 * main - printing its own name
 * @argc: size of argv
 * @agrv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc--;
	if (argc >= 0)
		printf ("%s\n", *argv);
	return (0);
}
