#include<stdio.h>

void jack_bauer(void)
{
	int digit1 = 0, digit2;

	while (digit1 < 24){
		digit2 = 0;
		while (digit2 <= 59){
		       putchar(digit1 / 10 + 48);	
		       putchar(digit1 % 10 + '0');
		       putchar (':');
		       putchar (digit2 / 10 + '0');
		       putchar (digit2 % 10 + '0');
		       putchar ('\n');
		digit2++;
		}
	digit1++;
	}
}	 
int main(void)
{
	    jack_bauer();
	        return (0);
}
