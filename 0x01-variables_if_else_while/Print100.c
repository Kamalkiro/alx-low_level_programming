#include<stdio.h>

int main()
{
	int p = 0;
	int pp;
	int newline = '\n';

	while (p <= 99){
		pp = 0;
		while (pp <= 99){
			if (p < pp){
				putchar(p / 10 + 48);
				putchar(p % 10 + 48);
				putchar (' ');
				putchar(pp / 10 + 48);
				putchar(pp % 10 + 48);
				if (pp != 99 || p != 98){ 
					putchar (',');
					putchar (' ');
				}
			}
			pp++;
		}
		p++;
	}
	putchar(newline);
	return 0;
}
