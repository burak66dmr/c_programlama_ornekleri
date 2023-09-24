#include <stdio.h>

int main()
{
    int sayi = 0;
    int son = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    printf("baslangic sayiyi girin: ");
    scanf("%d", &sayi);
    printf("son sayiyi girin: ");
    scanf("%d", &son);
    if (sayi > son || son < 99 || son > 999)
    {
        printf("hatali degerler girdiniz");
        return (0);
    }

    while(sayi <= son)
    {
        a = sayi / 100;
        b = (sayi / 10) % 10;
        c = sayi % 10;

        if (sayi == a * a * a + b * b * b + c * c * c)
            printf("%d\n", sayi);
        sayi++;
    }
    return (0);
}