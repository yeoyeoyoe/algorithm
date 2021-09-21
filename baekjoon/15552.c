#include <stdio.h>

void
add_and_show(int count)
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
    add_and_show(count);
    return (0);
}
