#include <stdio.h>

int main()
{
    int a = 1;
    int top = 0;

    while (a <= 100)
    {
        top += a;
        a++;
    }
    printf("%d", top);
    return (0);
}