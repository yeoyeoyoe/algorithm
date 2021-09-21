#include <stdio.h>

void
plus_minus_multiply_divide_remainder(void)
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
}

int
main(void)
{
    plus_minus_multiply_divide_remainder();
    return (0);
}
