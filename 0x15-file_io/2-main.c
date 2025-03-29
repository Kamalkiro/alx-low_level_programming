#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
int append_text_to_file(const char *filename, char *text_content)
{
    FILE *fp;
    int len = strlen(text_content);
    if (!filename || !*filename)
        return -1;
    fp = fopen(filename, "a+");
    if (!fp)
        return (-1);
    if (len <= 0)
    {
        fclose(fp);
        return 1;
    }
    fprintf(fp, text_content, len);
    fclose(fp);
    return 1;
}