#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("1.sayiyi girin: ");
    scanf("%d", &a);
    printf("2.sayiyi girin: ");
    scanf("%d", &b);
    c = a * a + b * b;
    printf("%d\n", c);
    return (0);
}