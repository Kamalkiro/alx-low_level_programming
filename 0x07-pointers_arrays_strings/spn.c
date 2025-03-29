#include<stdio.h>
unsigned int _strspn(char *s, char *accept);
int main(void)
{
	char *s = "hello, world";
	char *f = "ol, eh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	int i, j, byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int check = byte; 
		for (j = 0; accept[j] != '\0'; j++){
			if (s[i] == accept[j])
			{
				byte++;
			}
		}
		if (check == byte)
			break;
	}
	return (byte);
}
