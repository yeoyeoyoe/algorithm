#include <stdio.h>

int
get_quadrant_number(int x, int y)
{
    if (x > 0 && y > 0)
        return (1);
    else if (x < 0 && y > 0)
        return (2);
    else if (x < 0 && y < 0)
        return (3);
    else if (x > 0 && y < 0)
        return (4);
    return (0);
}

int
main(void)
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d\n", get_quadrant_number(x, y));
    return (0);
}
