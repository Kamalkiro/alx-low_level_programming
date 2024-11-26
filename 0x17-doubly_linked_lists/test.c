#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	printf("%d\n", (atoi(argv[1]) ^ 0x3b) & 0x3f);
	return 0;
}