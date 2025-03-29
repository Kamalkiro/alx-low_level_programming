#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 30);
    p = _realloc(p, sizeof(char) * 30, sizeof(char) * 0);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *copid;
    int i;

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }
    if (old_size == 0 || ptr == NULL)
    {
        ptr = malloc(new_size);
        if (ptr == NULL)
            return NULL;
        else
            return ptr;
    }
    if (old_size == new_size)
    {
        return (ptr);
    }
    copid = malloc(new_size);
    char *ptr_char = (char *)ptr;
    for (i = 0; i < old_size; i++)
    {
        copid[i] = ptr_char[i];
    }
    free(ptr);
    return (copid);
}