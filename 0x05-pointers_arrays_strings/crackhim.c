#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));

	int i, p, c = 0;
	
	for (i = 0; c <= 2646; i++)
	{
		p = rand() % 94 + 32;
		c += p;
		printf("%c", p);
	}
	if (c <= 2772)
	{
		p = 2772 - c;
		printf("%c", p);
		c += p;
	}
	return 0;
}
