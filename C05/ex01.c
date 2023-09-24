
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 66;
}

#include <stdio.h>

int main()
{
    int nbr = 5;
    int *nbrr = &nbr;
    int **nbrrr = &nbrr;
    int ***nbrrrr = &nbrrr;
    int ****nbrrrrr = &nbrrrr;
    int *****nbrrrrrr = &nbrrrrr;
    int ******nbrrrrrrr = &nbrrrrrr;
    int *******nbrrrrrrrr = &nbrrrrrrr;
    int ********nbrrrrrrrrr = &nbrrrrrrrr;


    ft_ultimate_ft(&nbrrrrrrrrr);
    printf("%d", nbr);
}
