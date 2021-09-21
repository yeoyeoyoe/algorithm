#include <stdio.h>

void
maximum(void)
{
    int data[9];
    int count;
    int max;
    int index;

    max = 0;
    index = 0;
    count = 0;
    while (count < 9)
    {
        scanf("%d", &(data[count]));
        if (max < data[count])
        {
            max = data[count];
            index = count + 1;
        }
        count++;
    }
    printf("%d\n", max);
    printf("%d\n", index);
}

int
main(void)
{
    maximum();
    return (0);
}
