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

    while (i < a + 1)
    {
        
        while (j <= b)
        {
             if (k == j)
                printf("*");

            else if (k >= j && l <= j)
                printf("*");

           

            else
                printf(" ");
            j++;
        }
        printf("\n");
        k++;
        l--;
        j = 1;
        i++;
    }
    i = 1;
    k--;
    l++;
    while (i < a)
    {
        k--;
        l++;   
        while (j <= b)
        {
            if (k == j)
                printf("*");

            else if (k >= j && l <= j)
                printf("*");
 
            else
                printf(" ");
            j++;
        }
        printf("\n");
        j = 1;
        i++;
    }
    return (0);
}