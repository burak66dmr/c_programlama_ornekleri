#include <unistd.h>

void ft_print_alphabet(void)
{
    int c = 'a';
    while ('a' <= c && c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

int main()
{
    ft_print_alphabet();
}