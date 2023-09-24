#include <stdio.h>

int main()
{
    int sayi = 0;
    int a = 1;
    int b = 1;
    int c = 0;
    printf("sayiyi gir: ");
    scanf("%d", &sayi);

    if (sayi <= 0)
    {
        printf("hatali sayi");
        return (0);
    }
    if (sayi >= 1)
        printf("1  ");
    if (sayi >= 2)
        printf("1  ");
    
    while (sayi > 2)
    {
        c = a + b;
        a = b;
        b = c;
        

        printf("%d  ", c);
        sayi--;
    }
    return (0);
}
