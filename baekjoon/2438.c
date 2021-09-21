#include <stdio.h>

void
show_star(const int count)
{
    int i;
    int j;

    i = 1;
    while (i <= count)
    {
        j = 0;
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
