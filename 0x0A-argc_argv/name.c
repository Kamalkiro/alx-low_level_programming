#include<stdio.h>
int main(int argc,char *argv[])
{
	if (*argv[argc - 1] != '\0')
		printf("%s\n", argv[0]);
	return 0;
}
