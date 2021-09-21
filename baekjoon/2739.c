#include <stdio.h>

void
show_times_table(const int base_number)
{
    int i;

    i = 1;
    while (i < 10)
    {
        printf("%d * %d = %d\n", base_number, i, base_number * i);
        i++;
    }
}

int
main(void)
{
    int base_number;

    scanf("%d", &base_number);
    show_times_table(base_number);
    return (0);
}
