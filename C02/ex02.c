#include <stdio.h>

int main()
{
    int i = 1;
    int j = 1;
    int a = 0;
    int b = 0;
    int k = 0;
    int l = 0;

    printf("ucgenin boyutunu girin: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("hatali sayi girdiniz");
        return (0);
    }

    b = 2 * a - 1;
    k = (b / 2) + 1;
    l = k;

    while (i < a)
    {
        
        while (j <= b)
        {
            if (l == j && k != l)
                printf("*");

            if (k == j)
                printf("*");

            if (l != j && k != j)
                printf(" ");
            j++;
        }
        printf("\n");
        k++;
        l--;
        j = 1;
        i++;
    }
    while (j <= b)
    {
        printf("*");
        j++;
    }
    printf("\n");
    return (0);
} 