#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char error_printer(void);

char error_printer()
{
    printf("Error\n");
    exit(98);
}
int main(int argc, char *argv[])
{
    int i = 0, j = 0, y = 0, x = 0, w = 0, z = 0, jh;
    char *ptr;

    if (argc != 3)
    {
        error_printer();
    }
    while (*argv[1] != '\0' && argv[1][i] != '\0')
        {
            if (argv[1][i] < 48 || argv[1][i] > 57)
            {
                error_printer();
            }
            i++;
        }
    while (*argv[2] != '\0' && argv[2][j] != '\0')
        {
            if (argv[2][j] < 48 || argv[2][j] > 57)
            {
                error_printer();
            }
            j++;
        }
    ptr = malloc(i + j + 1);
    if (ptr == NULL)
    {
        error_printer();
    }
    ptr[i + j] = '\0';
    int l = i + j - 1;
    int lilith = l;
    int jamal = 0;
    for (y = 0; y < i; y++)
    { 
        l = lilith - y;
        z = 0;
        for(jh = 0; jh < j; jh++)
        {
            if(ptr[l] == '\0')
                ptr[l] = 48;
            jamal = ptr[l] - 48;
            w = (argv[1][i - 1 - y] - 48) * (argv[2][j - 1 - jh] - 48) + z + jamal;
            z = w / 10;
            ptr[l] = (w % 10) + 48;
            l--;
        }
        if (z > 0)
        {
            ptr[l] += z + 48;
        }
    }
    // if (z > 0 && ptr)
    // {
    //     ptr[l] += z + 48;
    // }
    if (ptr[0] == '\0')
    {
        int jaja = 0;
        while (jaja <= i + j)
        {
            ptr[jaja] = ptr[jaja + 1];
            jaja++;
        }
    }

    printf ("\n%s\n", ptr);
    if (ptr != NULL)
    {
        free(ptr);
    }
    return(0);
}