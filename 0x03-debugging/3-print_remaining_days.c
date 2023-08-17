#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    int remaining_days;

    if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
    {
        if (month > 2 && day >= 60)
        {
            day++;
        }
        remaining_days = 366 - day;
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
            return;
        }
        remaining_days = 365 - day;
    }

    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", remaining_days);
}

