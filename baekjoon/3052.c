#include <stdio.h>

void
remainders(void)
{
    int number;
    int count;
    int remainders[42] = { 0, };

    count = 10;
    while (count)
    {
        scanf("%d", &number);
        remainders[number % 42] = 1;
        count--;
    }
    count = 0;
    number = 0;
    while (count < 42)
    {
        if (remainders[count])
            number++;
        count++;
    }
    printf("%d\n", number);
}

int
main(void)
{
    remainders();
    return (0);
}
