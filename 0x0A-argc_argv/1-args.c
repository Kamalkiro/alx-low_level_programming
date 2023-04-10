#include <stdio.h>
#include "main.h"
/**
 * main - printing number of arguments(argc)
 * @argc:number to be printed
 * @argv:variable to ignore
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	argc--;
	if (argc >= 0)
		printf("%d\n", argc);
	return (0);
}
