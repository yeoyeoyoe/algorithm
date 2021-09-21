#include <stdio.h>

# define HANSU 1
# define NOT_HANSU -1

int
is_hansu(int number)
{
    int position;
    int compare_count;
    int difference;
    int differences[3] = { 0, };
    int number_array[4] = { -1, -1, -1, -1 };

    if (number < 100)
        return (HANSU);
    position = 0;
    while (number)
    {
        number_array[position] = number % 10;
        number /= 10;
        position++;
    }
    compare_count = position - 1;
    position = 0;
    while (position < compare_count)
    {
        differences[position] = number_array[position] - number_array[position + 1];
        position++;
    }
    difference = differences[0];
    position = 1;
    while (position < compare_count)
    {
        if (difference != differences[position])
            return (NOT_HANSU);
        position++;
    }
    return (HANSU);
}

void
set_hansu(int n, int *numbers)
{
    int number;

    number = 1;
    while (number <= n)
    {
        if (is_hansu(number) == HANSU)
            numbers[number] = HANSU;
        else
            numbers[number] = NOT_HANSU;
        number++;
    }
}

int
get_number_of_hansu(int n, int *numbers)
{
    int number_of_hansu;

    number_of_hansu = 0;
    while (n)
    {
        if (numbers[n] == HANSU)
            number_of_hansu++;
        n--;
    }
    return (number_of_hansu);
}

int
main(void)
{
    int n;
    int numbers[1001] = { 0, };

    scanf("%d", &n);
    set_hansu(n, numbers);
    printf("%d\n", get_number_of_hansu(n, numbers));
    return (0);
}
