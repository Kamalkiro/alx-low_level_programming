#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printer() __attribute__((constructor));
void printer()
{
    printf("tt\n");
}
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
