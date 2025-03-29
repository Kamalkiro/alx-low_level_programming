#include<stdio.h>
char *_strpbrk(char *s, char *accept);
int main(void)
{
	char *s = "htttewiohlttlo, wtttorld";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				*s--;
				return (s);
			}
			*s++;
		}
	}
	return NULL;
}
