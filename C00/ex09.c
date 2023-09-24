#include <stdio.h>

int main()
{
    int sayac = 0;
    int sayi = 0;

    printf("sayi girin: ");
    scanf("%d", &sayi);

    while (sayi)
    {
        sayi /= 10;
        sayac++;
    }
    printf("sayi %d basamaklidir", sayac);
    return (0);
}