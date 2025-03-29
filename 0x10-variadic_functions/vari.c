#include<stdio.h>
#include<stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int main(void)
{
    print_numbers(", ", 2, "Jay", NULL);
    return (0);
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list baraw;
    int i = 0;
    char *tempo;
    
    if (!separator)
        return;
    va_start(baraw, n);
    while (i < n - 1)
    {
        tempo = va_arg(baraw, char*);
        if (tempo != NULL)
        {    
            printf("%s%c ", tempo, *separator);
        }
        else
        {
            printf("nil");
        }
        i++;
    }
    if (va_arg(baraw, char*))
        printf("%s\n", va_arg(baraw, char*));
    else
        printf("nil\n");
    va_end(baraw);
}