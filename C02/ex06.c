#include <stdio.h>

int main()
{
    int sayi = 0;
    int i = 0;

    printf("sayiyi gir: ");
    scanf("%d", &sayi);

    while (i <= 9)
    {
        printf("%d X %d = %d", sayi , i , sayi * i);
        i++;
        printf("\n");
    }
    return (0);
}