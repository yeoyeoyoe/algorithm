#include <stdio.h>

int
is_leap_year(int year)
{
    if ((!(year % 4) && (year % 100)) || !(year % 400))
        return (1);
    return (0);
}

int
main(void)
{
    int year;

    scanf("%d", &year);
    printf("%d\n", is_leap_year(year));
    return (0);
}
