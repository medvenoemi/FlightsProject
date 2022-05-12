//
// Created by Noemi on 2022. 04. 26..
//

#include <stdlib.h>
#include <stdio.h>
#include "city.h"
#include "country_array.h"

void createCountryArray(CountryArray** countryArray, int capacity){
    *countryArray = (CountryArray*)malloc(sizeof(countryArray));
    (*countryArray)->Countries = (Country **)malloc(sizeof(Country *));
    (*countryArray)->numberOfCountries = 0;
    (*countryArray)->capacity = capacity;
}

bool addNewCountry(CountryArray* countryArray, Country * newCountry, int position){
    if(countryArray->capacity<countryArray->numberOfCountries){
        countryArray->Countries[position]->name = newCountry->name;
        countryArray->Countries[position]->cities = newCountry->cities;
    }
}

void deleteCountryArray(CountryArray** countryArray){
    for(int i=0;i<(*countryArray)->numberOfCountries;i++){
        deleteCity(&(*countryArray)->Countries[i]);
    }
    free((*countryArray)->Countries);
    free(*countryArray);
}

void printCountries(CountryArray* countryArray){
    for(int i=0;i<countryArray->numberOfCountries;i++){
        display(countryArray->Countries[i]);
        printf("\n");
    }
}
