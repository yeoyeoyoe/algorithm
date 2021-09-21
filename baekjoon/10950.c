#include <stdio.h>

void
plus_loop(int count)
{
    int a;
    int b;

    while (count)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        count--;
    }
}

int
main(void)
{
    int count;

    scanf("%d", &count);
    plus_loop(count);
    return (0);
}
