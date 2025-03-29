#include <stdio.h>
#include <stdlib.h>
char **strtow(char *str);
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("ukgu uhu  ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
char **strtow(char *str)
{
    char **ret;
    int i, j = 0, x = 0, y = 0, z = 0, v = 0, la;
    if (str == NULL || *str == '\0')
        return NULL;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            z++;
            while(str[i] != ' ')
            {
                i++;
            }
        }
    }
    ret = malloc(sizeof(char *) * (z + 1));
    if (ret == NULL)
        return NULL;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            j = 0;
            while(str[i] != ' ' && str[i] != '\0')
            {
                j++;
                i++;
            }
            ret[y] = malloc(j + 1);
            if (ret[y] == NULL)
            {
                for (z = 0; z < y; z++)
                {
                    free(ret[z]);
                }
                free(ret);
                return (NULL);
            }
            y++;
        }
    }
    for (x = 0; str[x] != '\0'; x++)
    {
        while (str[x] == ' ' && v < z)
            x++;
        if (v < z - 1){
            for (la = 0; str[x] != ' ' && str[x] != '\0';la++, x++)
            {   
                ret[v][la] = str[x];
            }
            ret[v][la] = '\0';
            v++;
        }
    }
    ret[v] = NULL;
    return (ret);
}