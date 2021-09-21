#include <stdio.h>

int
plus_cycle(int n)
{
    const int n_copy = n;
    int n_ten;
    int cycle;

    cycle = 0;
    while (1)
    {
        n_ten = (n % 10) * 10;
        n = ((n / 10) + (n % 10)) % 10;
        n = n_ten + n;
        cycle++;
        if (n == n_copy)
            return (cycle);
    }
    return (cycle);
}

int
main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", plus_cycle(n));
    return (0);
}
