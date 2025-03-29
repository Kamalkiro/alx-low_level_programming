#include<stdio.h>
void print_buffer(char *b, int size);
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, 99);
	return (0);
}
void print_buffer(char *b, int size){
	int i, j, z;
	if (size <= 0)
		printf("\n");
	else{
		for (i = 0; i < size; i++){
			if(i == 0){
				printf("%08x: ", 0);
				printf("%02x", b[i]);
			}	
			else if ((i + 1) % 10 == 0 && i != 0){
				printf("%02x ", b[i]);
				for (j = 1; j < 11; j++){
					if (b[i + j - 10] <= 126 && b[i + j - 10] >= 32)
						printf ("%c",b[i + j - 10]);
					else if (b[i + j - 10] == '\0')
						printf(".");
					else	
						printf (".");
				}
				printf("\n%08x: ", i + 1);
			}
			else if (i % 2 == 0 && i != 0) 
				printf("%02x", b[i]);
			else
				printf("%02x ", b[i]);
		}
		while (i % 10 != 0){
			if (i % 2 == 0)
				printf(" ");
			printf("  ");
			i++;
		}
		for (z = size % 10; z >= 0; z--){
			if (b[size - z] >= 32 && b[size - z] <= 126)
				printf("%c", b[size - z]);
			else
				printf(".");
		}
		printf("\n");
	}
}
