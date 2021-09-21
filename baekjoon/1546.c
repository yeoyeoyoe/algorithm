#include <stdio.h>

void
average(void)
{
    int     max;
    int     count;
    int     number_of_scores;
    double  average;
    double  scores[1000] = { 0, };

    max = 0;
    scanf("%d", &number_of_scores);
    count = 0;
    while (count < number_of_scores)
    {
        scanf("%lf", &(scores[count]));
        if (scores[count] > max)
            max = scores[count];
        count++;
    }
    count = 0;
    average = 0;
    while (count < number_of_scores)
    {
        scores[count] = scores[count] / max * 100;
        average += scores[count];
        count++;
    }
    average /= number_of_scores;
    printf("%f\n", average);
}

int
main(void)
{
    average();
    return (0);
}
