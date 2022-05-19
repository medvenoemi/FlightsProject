//
// Created by Noemi on 2022. 04. 26..
//

#include "city.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void createCity(City ** city){
    *city = (City*) malloc(sizeof (City));
    if(!(*city)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
}

void deleteCity(City** city){
    free(*city);
}

void setCityData(City * newCity, char* name, int distance, int hour, int minute){
    if(!newCity){
        createCity(&newCity);
    }
    newCity->distance = distance;
    newCity->time.hour = hour;
    newCity->time.minute = minute;
    strcpy(newCity ->name, name);
}

void printCity(City *city){
    printf("\nCity details:\n"
           "\t%s is the name of the city\n"
           "\t The distance between the airport and the city is %d km\n"
           "\t The duration of the flight is %d hours and %d minutes",
           city->name,
           city->distance,
           city->time.hour,
           city->time.minute);
}

