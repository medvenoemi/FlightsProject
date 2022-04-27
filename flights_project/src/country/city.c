//
// Created by Noemi on 2022. 04. 26..
//

#include "city.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void createCity(City ** city){
    *city = (City *) malloc(sizeof (City));
}

void deleteCity(City** city){
    free(city);
}

void setCityData(City * newCountry, char* name, int distance, int timeDuration){
    newCountry -> distance = distance;
    newCountry ->timeDuration = timeDuration;
    strcpy(newCountry ->name, name);
}

void printCity(City *city, char *string){
    printf("details:\n"
           "%s is the name of the city\n"
           "\t The distance between the airport and the city is of %d km\n"
           "\t The duration of the flight is of %d hours",
           city->name,
           city->distance,
           city->timeDuration);
}

