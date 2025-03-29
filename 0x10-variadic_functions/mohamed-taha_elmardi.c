#include <stdio.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
int sum_them_all(const unsigned int n, ...)
{
    int i, sum = 0;
    va_list baraw;

    if (n == 0)
        return 0;
    va_start(baraw, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(baraw, int);
    }
    va_end(baraw);
    return (sum);
}