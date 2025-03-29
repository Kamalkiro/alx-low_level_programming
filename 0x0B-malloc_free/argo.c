#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av);
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
char *argstostr(int ac, char **av)
{
    int i, j = 0, all = 0, x, y = 0, lamiaa = 0;
    char *pt;
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            all++;
        }
        all++;
    }
    all++;
    pt = malloc(sizeof(char) * all);
    if (pt == NULL)
    {
        return (NULL);
    }
    for (x = 0; x < ac; x++)
    {   
        lamiaa = 0;
        while (av[x][lamiaa] != '\0')
        {
            pt[y] = av[x][lamiaa];
            y++;
            lamiaa++;
        }
        pt[y] = '\n';
        y++;
    }
    pt[y] = '\0';
    return(pt);
}