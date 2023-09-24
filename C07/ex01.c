
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}


#include <stdio.h>

int main()
{
    char src[] = "burak";
    char dest[] = "demir";

    printf("%s", ft_strncpy(dest, src, 3));
}