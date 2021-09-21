#include <stdio.h>

void
alarm_clock(const int hour, const int minute)
{
    int new_minute;
    int new_hour;

    new_hour = hour;
    new_minute = minute - 45;
    if (new_minute < 0)
    {
        new_minute = 60 + new_minute;
        new_hour = hour - 1;
    }
    if (new_hour < 0)
        new_hour = 23;
    else if (new_hour > 23)
        new_hour = 0;
    printf("%d %d\n", new_hour, new_minute);
}

int
main(void)
{
    int hour;
    int minute;

    scanf("%d %d", &hour, &minute);
    alarm_clock(hour, minute);
    return (0);
}
