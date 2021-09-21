#include <stdio.h>

void
    a_divide_by_b(void)
{
    long double a;
    long double b;

    scanf("%Lf %Lf", &a, &b);
    printf("%.9Lf\n", a / b);
}

int
    main(void)
{
    a_divide_by_b();
    return (0);
}
