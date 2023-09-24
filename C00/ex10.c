#include <stdio.h>

int main()
{
    int sayi = 0;

    printf("sayi gir: ");
    scanf("%d", &sayi);

    if (sayi % 2 == 0)
    {
        printf("sayi ciftdir");
        return (0);
    }
    printf("sayi tekdir");
    return (0);
}