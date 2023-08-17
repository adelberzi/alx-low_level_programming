#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

void positive_or_negative(int i) {
    if (i > 0) {
        printf("%d is positive\n", i);
    } else if (i < 0) {
        printf("%d is negative\n", i);
    } else {
        printf("The number is zero\n");
    }
}

int largest_number(int a, int b, int c) {
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    return largest;
}

void print_remaining_days(int month, int day, int year) {
    int days = convert_day(month, day);
    if (days != -1) {
        printf("There are %d days remaining in the year %d\n", days, year);
    } else {
        printf("Invalid date\n");
    }
}

int convert_day(int month, int day) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1]) {
        return -1;
    }
    int total_days = 0;
    for (int i = 0; i < month - 1; i++) {
        total_days += days_in_month[i];
    }
    total_days += day;
    return 365 - total_days;
}

#endif

