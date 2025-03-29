#include<stdio.h>
char *_strchr(char *s, char c);
int main(void)
{
	char *s = "heeaillobaraw";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
char *_strchr(char *s, char c)
{
	int i;
	char *nu = NULL, *rt;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			int suc;
			for(suc = 0; suc < i; suc ++){
				*s++;
			}
			rt = s;
			return (rt);
		}
	}
	return (nu);
}
