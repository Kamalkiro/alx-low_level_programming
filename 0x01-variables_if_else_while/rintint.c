#include<stdio.h>

int main()
{
	int p = '0';
	int pp;
	int ppp;
	int newline = '\n';

	while (p <= '9'){
		pp = '1';
		while (pp <= '9'){
			if (p < pp){
				ppp = '2';
				while (ppp <= '9'){
					if (p != '\0' && pp != '\0' && ppp != '\0'){
						if (p < pp && pp < ppp && p < ppp){
							putchar(p);
							putchar(pp);
							putchar(ppp);
							if (p != '7'){
								putchar (',');
								putchar (' ');}
							}
						}					
				ppp++;
				}
			}
			pp++;
		}
		p++;
		} putchar(newline);
	return 0;
}
