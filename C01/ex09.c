#include <stdio.h>

int main()
{
    int sayi = 0;
    int ust = 0;
    float res = 1;
    printf("sayiyi gir: ");
    scanf("%d", &sayi);
    printf("sayinin kuvvetini gir: ");
    scanf("%d", &ust);

    while (ust >= 0)
    {
        res *= sayi;
        ust--;
    }
    if (ust < 0)
    {
        while (ust != 0)
        {
            res /= sayi;
            ust++;
        }
    }


    printf("%.2f", res);
    return (0);
}