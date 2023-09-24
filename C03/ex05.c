#include <unistd.h>

void ft_print_comb(void)
{
    int i = '0';
    int j = i + 1;
    int k = j + 1;

    while (i <= '7')
    {
        while (j <= '8')
        {
            while (k <= '9')
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                k++;
                write(1, " ", 1);
            }
            j++;
            k = j + 1;
        }
        i++;
        j = i + 1;
    }
}

int main()
{
    ft_print_comb();
}