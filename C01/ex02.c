#include <stdio.h>

int main(void)
{
    int cift = 0;
    int tek = 0;
    int sayac = 20;
    int a = 0;
    while (sayac--)
    {
        printf("sayi gir: ");
        scanf("%d", &a);

        if (a % 2 == 0)
            cift += a;
        else
            tek += a;
    }
    printf("cift sayiların toplamı %d , tek sayilarin toplami %d dir", cift, tek);
    return (0);
}