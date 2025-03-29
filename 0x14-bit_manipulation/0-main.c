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

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
unsigned int binary_to_uint(const char *b)
{
    int i = 0, ret = 0;

    while (b[i])
    {
        if (b[i] != 49 && b[i] != 48)
        {
            return 0;
        }
        ret = ret * 2 + (b[i] - 48); 
        i++;
    }
    return (ret);
}