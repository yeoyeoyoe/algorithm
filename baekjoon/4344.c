#include <stdio.h>

# define SCORES_SIZE 1001
# define NUMBER_OF_STUDENTS_INDEX 1000

void
show_average_over_ratio(const double average, int *scores)
{
    int     loop_count;
    int     average_over_count;
    double  average_over_ratio;


    average_over_count = 0;
    loop_count = 0;
    while (loop_count < scores[NUMBER_OF_STUDENTS_INDEX])
    {
        if (scores[loop_count] > average)
            average_over_count++;
        loop_count++;
    }
    average_over_ratio = (double)average_over_count / scores[NUMBER_OF_STUDENTS_INDEX] * 100;
    printf("%.3f%%\n", average_over_ratio);
}

double
get_average(int *scores)
{
    int     count;
    double  average;

    count = 0;
    average = 0;
    while (count < scores[NUMBER_OF_STUDENTS_INDEX])
    {
        average += scores[count];
        count++;
    }
    average /= scores[NUMBER_OF_STUDENTS_INDEX];
    return (average);
}

void
set_scores(int *scores)
{
    int     count;

    scanf("%d", &(scores[NUMBER_OF_STUDENTS_INDEX]));
    count = 0;
    while (count < scores[NUMBER_OF_STUDENTS_INDEX])
    {
        scanf("%d", &(scores[count]));
        count++;
    }
}

int
main(void)
{
    int     number_of_cases;
    double  average;
    int     scores[SCORES_SIZE];

    scanf("%d", &number_of_cases);
    while (number_of_cases)
    {
        set_scores(scores);
        average = get_average(scores);
        show_average_over_ratio(average, scores);
        number_of_cases--;
    }
    return (0);
}
