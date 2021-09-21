#include <stdio.h>

int
get_sum(int n)
{
    int sum;

    sum = 0;
    while (n)
    {
        sum += n;
        n--;
    }
    return (sum);
}

int
main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", get_sum(n));
    return (0);
}
