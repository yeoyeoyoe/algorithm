#include <stdio.h>

# define SELF_NUMBER 1
# define NON_SELF_NUMBER 2

int
d(int n)
{
    int d;
    
    d = n;
    while (n)
    {
        d += (n % 10);
        n /= 10;
    }
    return (d);
}

void
set_non_self_numbers(const int self_number, int *numbers)
{
    int number;

    number = self_number;
    while (d(number) <= 10000)
    {
        numbers[d(number)] = NON_SELF_NUMBER;
        number = d(number);
    }
}

int
find_next_self_number(int start, int *numbers)
{
    while (start <= 10000)
    {
        if (numbers[start] == 0)
        {
            numbers[start] = SELF_NUMBER;
            return (start);
        }
        start++;
    }
    return (-1);
}

void
set_self_numbers(int *numbers)
{
    int number;

    number = 1;
    numbers[number] = SELF_NUMBER;
    while (number != -1)
    {
        set_non_self_numbers(number, numbers);
        number = find_next_self_number(number + 1, numbers);
    }
}

void
print_self_numbers(int *numbers)
{
    int number;

    number = 1;
    while (number <= 10000)
    {
        if (numbers[number] == SELF_NUMBER)
            printf("%d\n", number);
        number++;
    }
}

int
main(void)
{
    int numbers[10001] = { 0, };

    set_self_numbers(numbers);
    print_self_numbers(numbers);
    return (0);
}
