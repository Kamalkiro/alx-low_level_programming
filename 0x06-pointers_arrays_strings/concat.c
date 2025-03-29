#include<stdio.h>


char *_strncat(char *dest, char *src, int n);
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("1 %s\n", s1);
	printf("2 %s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("3 %s", s1);
	printf("4 %s", s2);
	printf("5 %s", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("6 %s", s1);
	printf("7 %s", s2);
	printf("8 %s", ptr);
	return (0);
}

char *_strncat(char *dest, char *src, int n)
{
	int i, j, go_backto0, check, ret;

	for (i = 0; *dest != '\0'; i++)
	{
		*dest++;
	}
	for (check = 0 ;*src != '\0'; *src++){
		check++;
	}
	ret = check;
	while (ret != 0){
		*src--;
		ret--;
	}
	if (n > check){
	       	for (j = 0; j < check; j++)
			{
			*dest = src[j];
			*dest++;
			}
	}
	else{ 
		 for (j = 0; j < n; j++)
			{
			*dest = src[j];
			*dest++;
			}
	}
	go_backto0 = i + j;
	while (go_backto0 != 0)
	{
		*dest--;
		go_backto0--;
	}
	return (dest);
}
