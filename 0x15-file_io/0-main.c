#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t ret = letters;
    FILE *fp;
    char *str = malloc(letters + 1);

    if (!filename || letters < 1)
        return 0;
    if (!str)
        return 0;
    fp = fopen(filename, "r");
    if (!fp)
        return 0;
    
    ret = fread(str, 1, letters, fp);
    printf("%s", str);
    fclose(fp);
    return ret;
}