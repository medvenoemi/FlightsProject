//
// Created by Acer on 5/9/2022.
//

#ifndef FLIGHTSPROJECT_PASSENGER_H
#define FLIGHTSPROJECT_PASSENGER_H

#include "city.h"
#include "errors.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>

enum Gender{
    FEMALE=0,
    MALE
};

typedef struct{
    char firstName[20];
    char lastName [20];
}Name;

typedef struct{
    int year, month, day;
}BirthDate;

enum Side{
    LEFT,
    RIGHT
};

typedef struct{
    unsigned int id;
    Name name;
    char nationality[20];
    enum Gender gender;
    BirthDate birthDate;
    int seat;
}Passenger;

void createPassenger(Passenger** passenger);
char *getGender(enum Gender type);
void setPassengerData(Passenger* passenger, char* lastName, char* firstName, char* nationality, enum Gender gender, int year, int month, int day);
void printPassenger(Passenger* passenger);
void deletePassenger(Passenger** passenger);


#endif //FLIGHTSPROJECT_PASSENGER_H
