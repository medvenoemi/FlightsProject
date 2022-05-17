//
// Created by Noemi on 2022. 04. 26..
//

#ifndef FLIGHTSPROJECT_COUNTRY_ARRAY_H
#define FLIGHTSPROJECT_COUNTRY_ARRAY_H
#include <stdbool.h>
#include "country.h"

typedef struct{
    Country** Countries;
    int capacity;
    int numberOfCountries;
}CountryArray;

void createCountryArray(CountryArray** countryArray, int capacity);
bool addNewCountry(CountryArray* countryArray, Country * newCountry);
Country* findCountryByName(CountryArray* countryArray, enum Countries country);
void deleteCountryArray(CountryArray** countryArray);
void printAllCities(CountryArray* countryArray);
void printCountries(CountryArray* countryArray);


#endif //FLIGHTSPROJECT_COUNTRY_ARRAY_H
