#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int con = 0;

    printf("1. sayiyi gir: ");
    scanf("%d", &a);
    printf("2. sayiyi gir: ");
    scanf("%d", &b);

    if (a < 0 || b < 0)
    {
        printf("hatali ayi girdiniz");
        return (0);
    }
    
    if (a < b)
        con = b;
    else
        con = a;
    while (1)
    {
        if (con % a == 0 && con % b == 0)
        {
            printf("EKOK = %d", con);
            break;
        }
        con++;
    }
    return (0);
}