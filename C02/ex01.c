
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int top = 0;
    int tut = 0;
    int n = 1;
    int basamak = 0;
    int i = 0;

    printf("baslangic sayisini gir: ");
    scanf("%d", &a);
    printf("son sayiyi gir: ");
    scanf("%d", &b);

    while (a < b)
    {
        tut = a;
        while (tut)
        {
            tut /= 10;
            basamak++;
        }
        tut = a;

        while (tut)
        {
            n = 1;
            while (i < basamak)
            {
                
                n *= tut % 10;
                i++;
            }
            top += n;
            i = 0;
            tut /= 10;

        }
        if (top == a)
            printf("%d  ", a);
        basamak = 0;
        top = 0;

        a++;
    }
    return (0);
}