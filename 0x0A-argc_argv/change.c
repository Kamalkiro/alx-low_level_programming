#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i, srf = 0;
	if (argc != 2){
		printf("Error\n");
		return 1;
	}
	i = atoi(argv[1]);
		
	int vcq, dix, cq, d, b;
	vcq = i / 100;
	dix = i % 100 / 10;
	cq = i % 10 / 5;
	d = i % 5 / 2;
	b = i % 2;
	srf = vcq + dix + cq + d + b;

	printf("%d\n", srf);
	return 0;
}
