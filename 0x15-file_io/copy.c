#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
void erreur(int a, char *str, int fd);

void erreur(int a, char *str, int fd)
{

    switch(a)
    {
        case 1 :
            write(2, "Usage: cp file_from file_to\n", strlen("Usage: cp file_from file_to\n"));
            exit(97);
        case 2 :
            fprintf(stderr, "Error: Can't read from file %s\n", str);
            exit(98);
        case 3 :
            fprintf(stderr, "Error: Can't write to %s\n", str);
            exit (99);
        case 4 :
            fprintf(stderr, "Error: Can't close fd %d", fd);
            exit (100);
    }
}
int main(int argc, char **ar)
{
    int fd;
    ssize_t check;
    FILE *fp;
    char *txt = malloc(1024);

    if (argc != 3)
        erreur(1, "", 0);
    fp = fopen(ar[1], "r");
    fd = open(ar[2], O_WRONLY | O_CREAT | O_TRUNC,0664);
    if (!fp || fd < 0)
    {
        erreur(2, "", 0);
    }
    check = fread(txt, sizeof(char), 1024, fp);
    if (check < 0)
        erreur (2, ar[1], fd);
    check = write(fd, txt, 1024);
    if (check < 0)
        erreur (3, ar[2], fd);
    fclose(fp);
    check = close(fd);
    if (check < 0)
        erreur (4, ar[2], fd);
    return 0;
}