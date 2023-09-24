
void ft_ft(int *nbr)
{
    *nbr = 66;
}

#include <stdio.h>

int main()
{
    int a = 88;
    ft_ft(&a);
    printf("%d", a);
}