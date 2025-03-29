#include<stdio.h>
#ifndef ABS
#define ABS(lami) ((lami >= 0) ? (lami) : (lami * -1))
#endif
int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);
	return (0);
}
