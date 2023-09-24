
void ft_swap(int *a, int *b)
{
    int *tpm;
    *tpm = *a;
    *a = *b;
    *b = *tpm;
}

#include <stdio.h>

int main()
{
    int a = 3;
    int b = 4;

    printf("%d  %d\n", a, b);    
    ft_swap(&a, &b);

    printf("%d  %d\n", a, b);
}