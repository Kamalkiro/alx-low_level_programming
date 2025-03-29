#include<stdio.h>
void _puts_recursion(char *s);
int main(void)
{
	_puts_recursion("Pion");
	return (0);
}
void _puts_recursion(char *s)
{
	char adim;
	
	if (*s != '\0')
	{
		adim = *s;
		*s++;
		putchar(adim);
		_puts_recursion(s);
	}
	else
		putchar('\n');
}
