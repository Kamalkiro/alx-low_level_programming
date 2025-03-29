#include<stdio.h>
int is_palindrome(char *s);
int isit_palindrome(char *s, char *p);
int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}
int is_palindrome(char *s)
{
	int i, d;
	char *p;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	p = &s[i - 1];
	if (isit_palindrome(s, p) == 1)
		return 1;
	else
		return 0;
}
int isit_palindrome(char *s, char *p)
{
	int check = 1;
	if (*p == *s && *s && *p)
	{
		p--;
		s++;
		check = isit_palindrome(s, p);
	}
	else if (*p != *s)
	{
		check = 0;
	}
	return check;
}
