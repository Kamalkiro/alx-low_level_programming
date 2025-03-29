#include<stdio.h>
int is_prime_number(int n);
int helpi(int n, int p);
int main(void)
{
int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
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
int is_prime_number(int n)
{
	int check;

	if (n > 1){
		check = helpi(n, 0);
		if (check == -1)
			return 1;
		if (check != -1)
			return 0;
	}
	else
		return 0;
}
