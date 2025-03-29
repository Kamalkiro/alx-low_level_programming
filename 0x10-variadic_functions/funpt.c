#include<stdio.h>
#include<stdarg.h>
void print_all(const char * const format, ...);
void printc(va_list baraw);
void printn(va_list baraw);
void printfl(va_list baraw);
void prints(va_list baraw);
void printnil();
typedef struct mahead {
    char op;
    void (*fp);
} voices;

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
void print_all(const char * const format, ...)
{
    va_list baraw;
    voices choice[] = {
        { 'c', &printc },
        { 's', &prints },
        { 'i', &printn },
        { 'f', &printfl },
        { '\0', &printnil }
    };
    int i, x = 0;
    char *sp = ", ";
    void (*jp)(va_list);

    if (!format)
    {
        return;
    }
    va_start(baraw, format);
    for (i = 0; format[i] != '\0' && choice[i].fp; i++)
    {   
        x = 0;
        while(x < 5)
        {
            if (choice[x].op == format[i])
            {
                jp = choice[x].fp;
                jp(baraw);
                if (format[i + 1] != '\0')
                {
                    printf("%s", sp);
                }
            }
            x++;
        }
    }
    putchar('\n'),
    va_end(baraw);
}
void printc(va_list baraw)
{
    printf("%c", va_arg(baraw, int));
}
void printn(va_list baraw)
{
    printf("%d", va_arg(baraw, int));
}
void printfl(va_list baraw)
{
    printf("%f", va_arg(baraw, double));
}
void prints(va_list baraw)
{
    char *lilith;

    lilith = va_arg(baraw, char*);
    if (lilith)
        printf("%s", lilith);
    else
        printnil();
}
void printnil()
{
    printf("nil");
}