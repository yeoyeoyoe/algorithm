#include <stdio.h>

void
hive(const int room_number)
{
    int room_range;
    int number_of_rooms;

    number_of_rooms = 1;
    room_range = 1;
    while (room_range < room_number)
    {
        room_range += (number_of_rooms * 6);
        number_of_rooms++;
    }
    printf("%d\n", number_of_rooms);
}

int
main(void)
{
    int room_number;

    scanf("%d", &room_number);
    hive(room_number);
    return (0);
}
