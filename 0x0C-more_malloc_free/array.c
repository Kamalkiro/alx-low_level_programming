#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *array_range(int min, int max);
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
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
    int *a;

    a = array_range(-512, 512);
    simple_print_buffer(a, 1);
    free(a);
    return (0);
}
int *array_range(int min, int max)
{
    int *ret;
    int i;

    if (min > max)
    {
        return (NULL);
    }
    ret = malloc(sizeof(int) * (max + 1 - min));
    if (ret == NULL)
        return NULL;
    for (i = 0; min <= max; i++)
    {
        ret[i] = min;
        min++;
    }
    return ret;
}