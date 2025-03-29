#include<stdio.h>

int main()
{
	int p = '0';
	int pp;
	int newline = '\n';

	while (p <= '9'){
		pp = '0';
		while (pp <= '9'){
			if (pp != p)
				if (p < pp)
				{
				putchar(p);
				putchar(pp);
				if (p != 9 && pp !=8)
					putchar (',');
					putchar (' ');
			}
			pp++;
		}
		p++;
		}
	putchar(newline);
	return 0;
}
