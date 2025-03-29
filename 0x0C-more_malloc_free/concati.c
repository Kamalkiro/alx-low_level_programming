#include <stdio.h>
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n);
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 128);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int i = 0, j = 0, z = 0, yy = 0;
    char *ret;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
        n = 0;
    }
    while (s1[z] != '\0')
        z++;
    while (s2[yy] != '\0')
        yy++;
    if (n <= yy){
        ret = malloc(z + n + 1);
    }
    else{
        ret = malloc(z + yy + 1);
    }
    if (ret == NULL)
        return (NULL);
    for (i = 0; i < z; i++)
    {
        ret[i] = s1[i];
    }
    if (n <= yy){
        for (j = 0; j < n; j++)
        {
            ret[i + j] = s2[j];
        }
        ret[i + j] = '\0';
    }
    else
    {
        for (j = 0; j < yy; j++)
        {
            ret[i + j] = s2[j];
        }
        ret[i + j] = '\0';
    }
    return(ret);
}