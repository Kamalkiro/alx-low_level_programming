#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i, sum;
	char *ptr;
	if (argc == 1)
		printf ("0\n");
	else {
		for (i = 1; i < argc; i++){
			ptr = argv[i];
			while (*ptr != '\0')
			{
				if (*ptr < 48 || *ptr > 57){
					printf("Error\n");
					return 1;
				}
				ptr++;
			}
			if (*argv[i] < '0' || *argv[i] > '9'){
				printf("Error\n");
				return 1;
			}
			else 
				sum += atoi(argv[i]);
		}
		printf ("%d\n", sum);
	}
	return 0;
}
