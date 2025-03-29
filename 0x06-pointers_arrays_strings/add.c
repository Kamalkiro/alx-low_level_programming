#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
char *infinite_add(char *n1, char *n2, char *r, int size_r){

	int i = 0, it, l, j = 0, d = 0;
	int rchd = 0, yns = 0, mhd = 0;

	while (n1[i] != '\0'){
		i++;
	}
	while (n2[j] != '\0'){
		j++;
	}
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r){
		return 0;
	}	
	for (it = l - 1; it >= 0; it--)
	{
		i--;
		j--;
		if (i >= 0){
			yns = n1[i] - 48;
		}
		else{
			yns = 0;
		}
		if (j >= 0){
			mhd = n2[j] - 48;
		}
		else{
			mhd = 0;
		}
		rchd = mhd + yns + d;
		d = rchd / 10;
		r[it] = rchd % 10 + 48;
	}
	r[l] = '\0';
	if(d > 0){
		if (size_r > l + 1)
		{
			while (l-- >= 0)
			{
				r[l + 1] = r[l];
			}
			r[l + 1] = '\0';
			r[0] = d + 48;
		}
		else{
			return 0;
		}
	}
	return (r);
}

