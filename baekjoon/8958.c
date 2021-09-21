#include <stdio.h>

int
calc_score(char *result_str)
{
    int     point;
    int     score;

    point = 0;
    score = 0;
    while (*result_str)
    {
        if (*result_str == 'O')
        {
            score += (1 + point);
            point++;
        }
        else
            point = 0;
        result_str++;
    }
    return (score);
}

void
ox_quiz(int count)
{
    int     score;
    char    ox_result[80];

    while (count)
    {
        scanf("%s", ox_result);
        score = calc_score(ox_result);
        printf("%d\n", score);
        count--;
    }
}

int
main(void)
{
    int count;

    scanf("%d", &count);
    ox_quiz(count);
    return (0);
}
