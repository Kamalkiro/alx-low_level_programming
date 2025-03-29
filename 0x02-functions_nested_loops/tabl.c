#include<stdio.h>

int main(void)
{	
	int i = 0 , x, n;

	for (i = 0; i <= 9; i++){
		for (x = 0; x <=9; x++){
			n = i * x;
			if (n >= 10){
				putchar(n / 10 + '0');
				putchar(n % 10 + 48);
				putchar(',');
				putchar(' ');
			}
			else{
				putchar(n + 48);
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return 0;
}
