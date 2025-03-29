#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str);

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup(NULL);
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
char *_strdup(char *str)
{
    int i, co = 0;
    char *ret;

    if (str == NULL){
        return NULL;
    }
    for (i = 0; str[i] != '\0'; )
    {
        i++;
    }
    ret = malloc(i);
    if (ret == NULL)
    {
        return NULL;
    }
    while (co <= i)
    {
        ret[co] = str[co];
        co++;
    }
    return (ret);
}