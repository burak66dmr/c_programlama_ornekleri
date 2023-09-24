
void ft_sort_int_tab(int *tab, int size)
{
   
}

#include <stdio.h>

int main()
{
    int tab[5] = {2,6,1,9,7};
    int i = 0;
    ft_sort_int_tab(tab, 5);

    while (i < 5)
    {
        printf("%d",tab[i]);
        i++;
    }
}