#include<stdio.h>
char *cap_string(char *);
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return 0;
}
char *cap_string(char *fi)
{
	int i, j;
	char h[] = {" \t\n,.;!?\"(){}"};

	for (i = 0; fi[i] != '\0'; i++)
	{
		for (j = 0; h[j] != '\0'; j++){
		       if (fi[i - 1] == h[j]){
				if (fi[i] >= 97 && fi[i] <= 122){
					fi[i] -= 32;
				}
		       }
		}
	}
	return (fi);
}			 				
