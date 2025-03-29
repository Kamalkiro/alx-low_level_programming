#include<stdio.h>
#include<stdlib.h>
int mul(int a, int b);
int main(int argc, char *argv[])
{
	int a, b;
	int hach7al;
	if (argc < 3){
		printf ("Error\n");
		return 1;
	}
	else{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		hach7al = mul(a, b);
		printf("%d\n", hach7al);
	}
	return 0;
}
int mul(int a, int b)
{
	return (a * b);
}
