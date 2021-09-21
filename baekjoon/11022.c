#include <stdio.h>

void
a_plus_b(const int count)
{
    int i;
    int a;
    int b;

    i = 1;
    while (i <= count)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
        i++;
    }
}

int
main(void)
{
    int count;

    scanf("%d", &count);
    a_plus_b(count);
    return (0);
}
