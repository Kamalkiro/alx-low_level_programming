#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size);
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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(50, sizeof(int));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ret;
    int i;
    
    if (nmemb < 1 || size < 1)
    {
        return (NULL);
    }
    else
    {    
        ret = malloc(size * nmemb);
        if (ret == NULL)
        {
            return NULL;
        }
        for (i = 0; i < (size * nmemb); i++)
        {
            ret[i] = 0;
        }
    }
    return (ret);   
}