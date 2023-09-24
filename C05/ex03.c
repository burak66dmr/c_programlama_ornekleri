
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>

int main()
{
    int a = 7;
    int b = 2;
    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d\n%d    %d", a, b, div, mod);
}