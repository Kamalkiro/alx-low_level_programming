#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
int create_file(const char *filename, char *text_content)
{
    int fd;
    int te = strlen(text_content);
    if (!filename || !(*filename))
        return -1;
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,0600);
    if (te > 0)
        write(fd, text_content, te);
    close(fd);
    return 1;
}