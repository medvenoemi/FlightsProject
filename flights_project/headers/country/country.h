//
// Created by timea on 5/17/2022.
//

#ifndef FLIGHTSPROJECT_COUNTRY_H
#define FLIGHTSPROJECT_COUNTRY_H


#include "city.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Countries{
    FRANCE=0,
    SPAIN,
    CANADA,
    CHINA,
    ITALY,
    TURKEY,
    MEXICO,
    THAILAND,
    GERMANY,
    UK
};

typedef struct {
    int capacity;
    int top;
    int counter;
    enum Countries name;
    City** cities;
}Country;

char* getCountry(enum Countries type);
void createCountry(Country** country, int capacity , enum Countries countryName);
void setCities(Country* toCountry, Country* fromCountry);
void push(Country*, City*);
void pop(Country*);
City* top(Country*);
bool isEmpty(Country*);
bool isFull(Country*);
void display(Country*);
void freeCountryStack(Country*);

#endif //FLIGHTSPROJECT_COUNTRY_H
