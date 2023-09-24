#include <stdio.h>

int is_prime(int num)
{
	int	i;
	int	number;

    i = 1;
    number = num;
    if (number == 1)
        return 1;
    while (number >= ++i)
    {
        if (number % i == 0)
        {
            number++;
            if (number == i)
                break ;
            number /= i;
            i = 1;
        }
    }
    return number;
}

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int asal_counter = 0;
    int neg = 0;
    int pos = 0;
    int tmp;
    int a = 2;

    printf("Ilk sayıyı giriniz: ");
    scanf("%d", &num1);
    printf("Ikinci sayıyı giriniz: ");
    scanf("%d", &num2);

    if(num2 < num1)
    {
        tmp = num2;
        num2 = num1;
        num1 = tmp; 
    }

    while (num1 <= num2)
    {
        if (num1 < 0)
            neg++;
        if (num1 >= 0)
            pos++;
        while (a <= num1)
        {
            if (num1 % a == 0)
                break;
            a++;
        }
        if (a == num1)
        {
            asal_counter++;
            a = 2;
        }
        else
            a = 2;
        num1++;
    }

    printf("İki sayını aralığındaki asal sayılar %d tanedir.\n", asal_counter);
    printf("İki sayını aralığındaki negatif sayılar %d tanedir.\n", neg);
    printf("İki sayını aralığındaki pozitif sayılar %d tanedir.\n", pos);

}