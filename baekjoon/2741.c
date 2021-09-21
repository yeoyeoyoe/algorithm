#include <stdio.h>

void
    print_one_to_n(const int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}

int
main(void)
{
    int n;

    scanf("%d", &n);
    print_one_to_n(n);
    return (0);
}
