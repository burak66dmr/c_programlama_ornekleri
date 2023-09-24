#include <stdio.h>

int main()
{
    int fac = 1;
    int sayi = 0;
    printf("faktoriyalini almak isdediginiz sayiyi girin: ");
    scanf("%d", &sayi);
    while (sayi > 0)
    {
        fac *= sayi;
        sayi--;
    }
    printf("%d", fac);
    return (0);
}