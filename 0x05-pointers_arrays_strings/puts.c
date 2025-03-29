#include <stdio.h>

void puts_half(char *str);
int main(void)
{
	char *str;
	str = "0123456789";
	puts_half(str);
	return 0;
}

void puts_half(char *str)
{
	int n, length_of_the_string;

	for (length_of_the_string = 0; str[length_of_the_string]; length_of_the_string++)
	{
	}
	if (length_of_the_string % 2 == 0)
		length_of_the_string = length_of_the_string / 2;
	else
	{
		length_of_the_string--;
		length_of_the_string = length_of_the_string / 2;
	}

	for (n = 0; n < length_of_the_string; n++)
	{
		putchar (str[n + length_of_the_string]);
	}
	putchar ('\n');
}
