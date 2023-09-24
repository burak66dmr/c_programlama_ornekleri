#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int con = 0;
    printf("1. sayi: ");
    scanf("%d", &a);
    printf("2. sayi: ");
    scanf("%d", &b);
    
    if (a < 0 || b < 0)
    {
        printf("hatali sayi girdiniz");
        return (0);
    }

    if (a < b)
        con = a;
    else
        con = b;
    while (con != 1)
    {
        if (a % con == 0 && b % con == 0)
        {
            printf("EBOB = %d", con);
            return (0);
        }
        con--;
    }
    printf("EBOB = 1");
    return (0);
}