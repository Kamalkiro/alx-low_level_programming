#include "3-calc.h"
/**
 * main - check
 * @argc: num
 * @argv: arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*fc)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fc = get_op_func(argv[2]);
	if (!fc)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", fc(a, b));
	return (0);
}
