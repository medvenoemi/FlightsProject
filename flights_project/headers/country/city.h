//
// Created by Noemi on 2022. 04. 26..
//

#ifndef FLIGHTSPROJECT_CITY_H
#define FLIGHTSPROJECT_CITY_H

typedef struct{
    int hour, minute;
}timeDuration;

typedef struct{
    char name[30];
    int distance;
    timeDuration time;
}City;

void createCity(City ** city);
void deleteCity(City**);
void setCityData(City * city, char* name, int distance, int hour, int minute);
void printCity(City *city, char *string);

#endif //FLIGHTSPROJECT_CITY_H
