#include <stdio.h>

int main()
{
    int res = 1;
    int a = 0;
    int b = 0;
    int top = 0;
    
    printf("1. sayiyi gir: ");
    scanf("%d", &a);
    printf("2. sayiyi gir: ");
    scanf("%d", &b);

    if (a < 0 && b < 0)
    {
        a *= -1;
        b *= -1;
    }
    else if (a < 0)
    {
        a *= -1;
        res = -1;
    }
    else if (b < 0)
    {
        b *= -1;
        res = -1;
    }
    
    while (b)
    {
        top += a;
        b--;
    }
    printf("%d\n", top * res);
    return (0);
}
