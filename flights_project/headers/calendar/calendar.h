//
// Created by Noemi on 2022. 04. 26..
//

#ifndef FLIGHTSPROJECT_CALENDAR_H
#define FLIGHTSPROJECT_CALENDAR_H

enum Months{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int numberOfDays(int monthNumber, int year);
int dayNumber(int day, int month, int year);
void printCalendar(int year);


#endif //FLIGHTSPROJECT_CALENDAR_H
