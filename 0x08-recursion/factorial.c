#include<stdio.h>
int factorial(int n);
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
int factorial(int n)
{
	int sal = 0;

	if (n == 0)
		sal = 1;
	if (n < 0)
		sal = -1;
	if (n > 0){
		n = n * factorial(n - 1);
		sal = n;
	}
	return (sal);
}
