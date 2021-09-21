#include <stdio.h>

void
a_plus_b(void)
{
    int a;
    int b;

    a = -1;
    b = -1;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break ;
        printf("%d\n", a + b);
    }
}

int
main(void)
{
    a_plus_b();
    return (0);
}
