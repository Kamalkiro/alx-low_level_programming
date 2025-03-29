#include<stdio.h>
void print_number(int n);
int main(void)
{
	print_number(98);
	putchar('\n');
	print_number(402);
	putchar('\n');
	print_number(1024);
	putchar('\n');
	print_number(0);
	putchar('\n');
	print_number(-98);
	putchar('\n');
	return (0);
}
void print_number(int n)
{
	int i, value;

	if (n < 0){
		n *= -1;
		putchar('-');
	}
	if (n >= 10){
		value = n / 10;
		print_number(value);
	}
	putchar (n % 10 + 48);
}
