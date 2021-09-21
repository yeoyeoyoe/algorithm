#include <stdio.h>

void
show_star(const int count)
{
    int i;
    int j;
    int k;

    i = 1;
    while (i <= count)
    {
        j = 0;
        k = count;
        while (k > i)
        {
            printf(" ");
            k--;
        }
        while (j < i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int
main(void)
{
    int count;

    scanf("%d", &count);
    show_star(count);
    return (0);
}
