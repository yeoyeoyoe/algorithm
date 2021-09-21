#include <stdio.h>

int
sum_one_to_n(const int n)
{
    int number;
    int sum;

    number = 1;
    sum = 0;
    while (number <= n)
    {
        sum += number;
        number++;
    }
    return (sum);
}

void
find_fraction(const int order)
{
    int count;
    int stage;
    int numerator;
    int denominator;

    numerator = 1;
    denominator = 1;
    stage = 1;
    count = 1;
    while (count <= order)
    {
        if (count == sum_one_to_n(stage))
        {
            stage++;
        }
        count++;
    }
}

int
main(void)
{
    return (0);
}
