#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > sizeof(n) * 8)
        return 0;
    if (*n & 1L << index)
        *n = (*n ^ 1 << index);
    return (*n);
}