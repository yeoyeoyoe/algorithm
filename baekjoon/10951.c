#include <stdio.h>

void
a_plus_b(void)
{
    int a;
    int b;

    a = -1;
    b = -1;
    while (scanf("%d %d", &a, &b) != -1)
    {
        printf("%d\n", a + b);
    }
}

int
main(void)
{
    a_plus_b();
    return (0);
}
