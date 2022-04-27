//
// Created by Noemi on 2022. 04. 26..
//

#ifndef FLIGHTSPROJECT_COUNTRY_ARRAY_H
#define FLIGHTSPROJECT_COUNTRY_ARRAY_H
#include <stdbool.h>
#include "city.h"

typedef struct{
    City** Cities;
    int capacity;
    int numberOfCities;
}CountryArray;

void createCountryArray(CountryArray** countryArray, int capacity);
bool addNewCountry(CountryArray* countryArray, City* newCity);
void deleteCountryArray(CountryArray** countryArray);
void printCountries(CountryArray* countryArray);

#endif //FLIGHTSPROJECT_COUNTRY_ARRAY_H
