#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(89);
    printf("\n");
    print_binary(97);
    printf("\n");
    print_binary(115);
    printf("\n");
    print_binary(115);
    printf("\n");
    print_binary(105);
    printf("\n");
    print_binary(110);
    printf("\n");
    print_binary(101);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
