#include <stdio.h>

void
get_grade(int score)
{
    if (score <= 100 && score >= 90)
        printf("A\n");
    else if (score <= 89 && score >= 80)
        printf("B\n");
    else if (score <= 79 && score >= 70)
        printf("C\n");
    else if (score <= 69 && score >= 60)
        printf("D\n");
    else
        printf("F\n");
}

int
main(void)
{
    int score;

    scanf("%d", &score);
    get_grade(score);
    return (0);
}
