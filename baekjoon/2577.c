#include <stdio.h>

void
number_of_numbers(void)
{
    int number_count[10] = { 0, };
    int temp; 
    int number;

    number = 1;
    while (number < 1000000)
    {
        scanf("%d", &temp);
        number *= temp;
    }
    while (number)
    {
        number_count[number % 10]++;
        number /= 10;
    }
    temp = 0;
    while (temp < 10)
    {
        printf("%d\n", number_count[temp]);
        temp++;
    }
}

int
main(void)
{
    number_of_numbers();
    return (0);
}
