#include <stdio.h>
void rev_string(char *s);

int main(void)
{
	char s[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	printf("%s\n", s); 
	rev_string(s);
	printf("%s\n", s); 
	return 0;
}
void rev_string(char *s)
{
	int truu, i = 0, t;

	for (truu = 0; s[truu] != '\0'; truu++)
	{
	}
	t = truu - 1;
	for (i = 0 ; i < t; t--)
	{
		char temp = s[t];
		s[t] = s[i];
		s[i] = temp;
		i++;
	}
}
