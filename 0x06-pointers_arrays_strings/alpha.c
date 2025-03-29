#include<stdio.h>
char *string_toupper(char *);
int main(void)
{
	char str[] = "baraw\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
char *string_toupper(char *dattebayo){
	int i;
	for (i = 0; dattebayo[i] != '\0'; i++){
		if (dattebayo[i] <= 122 && dattebayo[i] >= 97){
			dattebayo[i] -= 32;
		}
		continue;
	}
	return(dattebayo);
}
