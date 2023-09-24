#include <stdio.h>

int main()
{
    int a = 2;
    int sayi = 0;
    printf("sayi gir: ");
    scanf("%d", &sayi);

    while (a < sayi)
    {
        if (sayi % a == 0)
        {
            printf("sayi asal degil");
            return (0);
        }
        a++;
    }
    printf("sayi sayi");
    return (0);
}
