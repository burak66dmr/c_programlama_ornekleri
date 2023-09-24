
void ft_ultimate_div_mod(int *a, int *b)
{
    int k = *a / *b;
    int l = *a % *b;

    *a = k;
    *b = l;

}

#include <stdio.h>

int main()
{
    int a = 7;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);

    printf("%d  %d", a, b);
}