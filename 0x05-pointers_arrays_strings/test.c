#include <stdio.h>
int _atoi(char *s);
int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
int _atoi(char *s)
{
	int i, value = 0;
	int sign = 1;
	for (i = 0; s[i] != '\0';i++)
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= 48 && s[i] < 58){
			value = value * 10 + s[i] - 48;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	return(value * sign);
}
