//
// Created by Noemi on 2022. 04. 26..
//

#ifndef FLIGHTSPROJECT_CITY_H
#define FLIGHTSPROJECT_CITY_H

typedef struct{
    char name[30];
    int distance;
    int timeDuration;
}City;

void createCity(City ** city);
void deleteCity(City**);
void setCityData(City * country, char* name, int distance, int timeDuration);
void printCity(City *city, char *string);

#endif //FLIGHTSPROJECT_CITY_H
