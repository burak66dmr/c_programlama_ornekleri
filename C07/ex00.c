
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
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

    printf("%s", ft_strcpy(dest, src));
}