#include <stdio.h>

int main()
{
    int sayi = 0;
    int a = 1;
    int b = 1;
    int c = 1;
    
    printf("sayiyi girin: ");
    scanf("%d", &sayi);

    if (sayi < 0)
    {
        printf("hatali sayi girdiniz");
        return (0);
    }

    while (sayi > 2)
    {
        c = a + b;
        a = b;
        b = c;
        sayi--;
    }
    printf("%d", c);
    return (0);
}