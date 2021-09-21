#include <stdio.h>

void
show_numbers_smaller_than_x(int count, int x)
{
    int number;

    while (count)
    {
        scanf("%d", &number);
        if (number < x)
        {
            printf("%d", number);
            printf(" ");
        }
        count--;
    }
    printf("\n");
}

int
main(void)
{
    int count;
    int x;

    scanf("%d %d", &count, &x);
    show_numbers_smaller_than_x(count, x);
    return (0);
}
