#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main(void)
{
    int i;
    puts ("I will start counting soon.");
    sleep(3);
    for (i = 0; i <= 8; i++)
    {
        putchar (i + 49);
        putchar ('\n');
        sleep(1);
    }
    puts("Let\'s faking goooooo");
    return 0;
}