//
// Created by Noemi on 2022. 04. 26..
//

#include <stdlib.h>
#include <stdio.h>
#include "city.h"
#include "country_array.h"

void createCountryArray(CountryArray** countryArray, int capacity){
    *countryArray = (CountryArray*)malloc(sizeof(countryArray));
    if(!(*countryArray)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    (*countryArray)->Countries = (Country**)malloc(capacity*sizeof(Country *));
    if(!(*countryArray)->Countries){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    for(int i=0; i<capacity;i++){
        (*countryArray)->Countries[i] = (Country*) malloc(capacity*sizeof(Country));
        if(!(*countryArray)->Countries[i]){
            //printErrorMessages(MEMORY_ALLOCATION);
        }
    }
    (*countryArray)->numberOfCountries = 0;
    (*countryArray)->capacity = capacity;
}

bool addNewCountry(CountryArray* countryArray, Country * newCountry){
    if(countryArray->capacity < countryArray->numberOfCountries){
        countryArray->Countries[countryArray->numberOfCountries]->name = newCountry->name;
        countryArray->Countries[countryArray->numberOfCountries]->cities = newCountry->cities;
        countryArray->numberOfCountries++;
        return true;
    }
    return false;
}

void deleteCountryArray(CountryArray** countryArray){
    for(int i=0;i<(*countryArray)->numberOfCountries;i++){
        free((*countryArray)->Countries[i]);
    }
    free((*countryArray)->Countries);
    free(*countryArray);
}

void printAllCities(CountryArray* countryArray){
    for(int i=0; i<countryArray->numberOfCountries; i++){
        display(countryArray->Countries[i]);
    }
}

void printCountries(CountryArray *countryArray) {
    for(int i=0;i<countryArray->numberOfCountries;i++){
        printf("%s\n", countryArray->Countries[i]->name);
    }
}

Country *findCountryByName(CountryArray *countryArray, enum Countries country) {
    for(int i=0; i<countryArray->capacity; i++){
        if(countryArray->Countries[i]->name == country){
            return countryArray->Countries[i];
        }
    }
    return NULL;
}
