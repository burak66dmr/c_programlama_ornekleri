#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int org = 0;
    int tut = 0;

    printf("baslangic sayisini gir: ");
    scanf("%d", &a);
    printf("son sayiyi gir: ");
    scanf("%d", &b);

    if (a < 10 || b < 10)
    {
        printf("hatali sayi girdiniz");
        return (0);
    }

    while (a <= b)
    {
        org = a;
        while (org)
        {
            tut *= 10;
            tut += org % 10;
            org /= 10;
        }
        if (a == tut)
            printf("%d  ", a);
        tut = 0;
        a++;
    }
    return (0);
}