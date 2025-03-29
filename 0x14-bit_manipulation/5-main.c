#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int ret = n ^ m, check = 0, ret2 = ret;
    while (ret2 > 0)
    {
        ret = ret2;
        if (ret & 1)
            check++;
        ret2 = ret >> 1;
    }
    return check;
}