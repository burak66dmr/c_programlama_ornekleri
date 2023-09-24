#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int top = 0;
    int i = 0;

    printf("baslangic sayiyi gir: ");
    scanf("%d", &a);
    printf("son sayiyi gir: ");
    scanf("%d", &b);


    while (a <= b)
    {
        i = (a / 2) + 1;
        while (i >= 0)
        {
            if (a % i == 0)
                top += i;
            i--;

        }
        if (top == a)
            printf("%d   ", a);

        top = 0;
        a++;
    }
    return (0);
}