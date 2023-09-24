#include <stdio.h>

int main()
{
    int i = 1;
    int j = 1;
    int a = 0;
    int b = 0;

    printf("dikdortgenin boyunu girin: ");
    scanf("%d", &a);
    printf("dikdortgenin enini girin: ");
    scanf("%d", &b);
    
    if (a < 0 || b < 0)
    {
        printf("hatali sayi girdiniz");
        return (0);
    }

    while (i <= a)
    {

        while (j <= b)
        {
            if (i == 1 || i == a)
                printf("* ");
            
            else if (j == 1 || j == b)
                printf("* ");
            
            else
                printf("  ");
            
            j++;
        }
        j = 1;
        i++;
        printf("\n");

    }
    printf("\n");
    return (0);
}