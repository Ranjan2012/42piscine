#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

        a = 23;
        b = 94;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 123;
        b = 456;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

    a = 34567;
    ft_swap(&a, &a);
    printf("%d\n", a);
    return (0);
}

