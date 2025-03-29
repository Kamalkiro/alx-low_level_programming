#include<stdio.h>
char *leet(char *);
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
char *leet(char *yeet)
{
	int i, x;
	char noyeet[] = "AEOTLaeotl";
	char dattebayeet[] = "4307143071";

	for (x = 0; yeet[x] != '\0'; x++)
	{
		for (i = 0; noyeet[i] != '\0'; i++){
			if (yeet[x] == noyeet[i]){
				yeet[x] = dattebayeet[i];
			}
		}
	}
	return (yeet);
}
