#include<stdio.h>
int wildcmp(char *s1, char *s2);
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	r = wildcmp("abc", "*b");
	printf("%d\n", r);
	return (0);
}
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return 1;
	if (*s1 == *s2)
	{
		*s1++;
		*s2++;
		return (wildcmp(s1, s2));
	}
	else
	{
		if (*s2 == '*')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		
	}
	return 0;
}
