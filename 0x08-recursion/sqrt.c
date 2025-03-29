#include<stdio.h>
int _sqrt_recursion(int n);
int helpi(int n, int p);
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
int _sqrt_recursion(int n)
{
	return (helpi(n, 1));
}
int helpi(int n, int p)
{	
	if (p <= n){
		if (p * p == n)
			return p;
		else{
			p++;
			helpi(n, p);
		}
	}
	else
		return -1;
}
