//
// Created by Noemi on 2022. 05. 10..
//

#ifndef FLIGHTSPROJECT_COUNTRY_H
#define FLIGHTSPROJECT_COUNTRY_H

#include "city.h"
#include <stdbool.h>

enum Countries{
    FRANCE,
    SPAIN,
    UNITED_STATES,
    CHINA,
    ITALY,
    TURKEY,
    MEXICO,
    THAILAND,
    GERMANY,
    UNITED_KINGDOM
};

typedef struct {
    unsigned int capacity;
    int top;
    enum Countries name;
    City** cities;
}Country;

char* getCountry(enum Countries type);
void createCountry(Country**, unsigned int, enum Countries);
void push(Country*, City*);
void pop(Country*);
City* top(Country*);
bool isEmpty(Country*);
bool isFull(Country*);
void display(Country*);
void freeCountryStack(Country*);

#endif //FLIGHTSPROJECT_COUNTRY_H
