#include<stdio.h>
int _strlen_recursion(char *s);
int main(void)
{
int n;

	n = _strlen_recursion("kamalhamza");
	printf("%d\n", n);
	return (0);
}
int _strlen_recursion(char *s)
{
	int str = 1;
	
	if (*s == '\0')
		str = 0;
	if (*s != '\0')
	{
		s++;
		str += _strlen_recursion(s);
	}
	return (str);
}	
