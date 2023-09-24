
void ft_rev_int_tab(int *tab, int size)
{
    int tmp = 0;
    int i = 0;
    size--;
    while (size / 2)
    {
        tmp = tab[i];
        tab[i] = tab[size];
        tab[size] = tmp;
        i++;
        size--;
    }
}

#include <stdio.h>

int main()
{
    int tab[5] = {1,2,3,4,5};
    int i = 0;

    ft_rev_int_tab(tab, 5);
    while (i < 5)
    {
        printf("%d  ", tab[i]);
        i++;
    }
}
