#include<stdio.h>
#include<stdlib.h>
void error_printer(int a);
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
void error_printer(int a)
{
    printf("Error\n");
    exit(a);
}
int op_add(int a, int b)
{
    return (a + b);
}
int op_sub(int a, int b)
{
    return (a - b);
}
int op_mul(int a, int b)
{
    return (a * b);
}
int op_div(int a, int b)
{
    return (a / b);
}
int op_mod(int a, int b)
{
    return (a % b);
}
int (*get_op_func(char *s))(int, int)
{
    char ar[6] = {'+', '-', 'x', '/', '%'};
    void (*ret);
    int (*fp[])(int, int) = {&op_add, &op_sub, &op_mul, &op_div, &op_mod};
    int i = 0;

    while(i < 5 && s)
    {
        if ((ar[i]) == *s)
        {
            ret = fp[i];
            break;
        }
        i++;
    }
    return ret;
}
int main(int argc, char **argv)
{
    int h = 0, i = 0, spinoza = 0, yns;
    char ar[6] = "+-x/%";
    int fp;
    if (argc != 4)
    {
        // printf("%d\n", argc);
        error_printer(98);
    }
    if (argv[2][1] || ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0'))
    {
        error_printer(100);
    }
    while (i < 5)
    {
        if(argv[2][0] == ar[i])
        {
            break;
        }
        if (i == 4)
        {
            error_printer(99);
        }
        i++;
    }
    yns = atoi(argv[1]);
    spinoza = atoi(argv[3]);
    fp = get_op_func(argv[2])(yns, spinoza);
    printf("%d\n", fp);
    return 0;
}