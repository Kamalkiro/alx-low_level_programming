#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2);
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("barraw", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
char *str_concat(char *s1, char *s2)
{
    char *ret;
    int i, n, b = 0, c, su, co = 0;

    if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";
    for (i = 0; s1[i] != '\0';)
    {
        i++;
    }
    for (n = 0; s2[n] != '\0';)
    {
        n++;
    }
    ret = malloc(n + i);
    if (ret == NULL)
    {
        return (NULL);
    }
    while (b <= i)
    {
        *(ret + b) = s1[b];
        b++;
    }
    c = i;
    su = n + i;
    while (c <= su)
    {
        *(ret + c) = s2[co];
        c++;
        co++;
    }
    ret[c] = '\0';
    return(ret);
}