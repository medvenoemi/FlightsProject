//
// Created by Noemi on 2022. 04. 26..
//

#include "calendar.h"
#include <stdio.h>

char* getMonth(enum Months type){
    switch (type) {
        case JANUARY:
            return "January";
            break;
        case FEBRUARY:
            return "February";
            break;
        case MARCH:
            return "March";
            break;
        case APRIL:
            return "April";
            break;
        case MAY:
            return "May";
            break;
        case JUNE:
            return "June";
            break;
        case JULY:
            return "July";
            break;
        case AUGUST:
            return "August";
            break;
        case SEPTEMBER:
            return "September";
            break;
        case OCTOBER:
            return "October";
        case NOVEMBER:
            return "November";
            break;
        case DECEMBER:
            return "December";
            break;
        default:
            return "Undifined";
    }
}

int numberOfDays(int monthNumber, int year){
    // January
    if (monthNumber == 0)
        return (31);

    // February
    if (monthNumber == 1) {
        // If the year is leap then Feb
        // has 29 days
        if (year % 400 == 0
            || (year % 4 == 0
                && year % 100 != 0))
            return (29);
        else
            return (28);
    }

    // March
    if (monthNumber == 2)
        return (31);

    // April
    if (monthNumber == 3)
        return (30);

    // May
    if (monthNumber == 4)
        return (31);

    // June
    if (monthNumber == 5)
        return (30);

    // July
    if (monthNumber == 6)
        return (31);

    // August
    if (monthNumber == 7)
        return (31);

    // September
    if (monthNumber == 8)
        return (30);

    // October
    if (monthNumber == 9)
        return (31);

    // November
    if (monthNumber == 10)
        return (30);

    // December
    if (monthNumber == 11)
        return (31);
}

int dayNumber(int day, int month, int year){
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return (year + year / 4
            - year / 100
            + year / 400
            + t[month - 1] + day)
           % 7;
}

void printCalendar(int year){
    printf("     Calendar - %d\n\n", year);
    int days;

    int current = dayNumber(1, 1, year);

    for (int i = 0; i < 12; i++) {
        days = numberOfDays(i, year);

        printf("\n ------------%s-------------\n",getMonth(i));

        printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

        int k;
        for (k = 0; k < current; k++)
            printf("     ");

        for (int j = 1; j <= days; j++) {
            printf("%5d", j);

            if (++k > 6) {
                k = 0;
                printf("\n");
            }
        }

        if (k)
            printf("\n");

        current = k;
    }

    return;
}


