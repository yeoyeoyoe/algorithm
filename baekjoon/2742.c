#include <stdio.h>

void
    print_n_to_one(int n)
{
    while (n)
    {
        printf("%d\n", n);
        n--;
    }
}

int
main(void)
{
    int n;

    scanf("%d", &n);
    print_n_to_one(n);
    return (0);
}
