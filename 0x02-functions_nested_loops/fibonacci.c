#include<stdio.h>

int main()
{
	long int n = 1, count, var = 2;
	long int bro;

	printf("%ld, ",n);
	printf("%ld, ",var);
	for (count = 3; count < 98 ; count ++)
	{
		bro = var + n;
		printf("%ld, ",bro);
		n = var;
		var = bro;
	}
	putchar ('\n');
	return 0;
}

