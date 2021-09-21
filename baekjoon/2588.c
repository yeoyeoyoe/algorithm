#include <stdio.h>

void
multiply(void)
{
    int a;
    int b;
    int multiplied;

    scanf("%d", &a);
    scanf("%d", &b);
    multiplied = a * b;
    while (b != 0)
    {
        printf("%d\n", a * (b % 10));
        b /= 10;
    }
    printf("%d\n", multiplied);
}

int
main(void)
{
    multiply();
    return (0);
}
