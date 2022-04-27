//
// Created by Noemi on 2022. 04. 26..
//

#include <stdlib.h>
#include <stdio.h>
#include "city.h"
#include "country_array.h"

void createCountryArray(CountryArray** countryArray, int capacity){
    *countryArray = (CountryArray*)malloc(sizeof(countryArray));
    (*countryArray)->Cities = (City**)malloc(sizeof(City*));
    (*countryArray)->numberOfCities = 0;
    (*countryArray)->capacity = capacity;
}

bool addNewCountry(CountryArray* countryArray, City* newCity){
    if(countryArray->numberOfCities<countryArray->capacity){
        createCity(&countryArray->Cities[countryArray->numberOfCities]);
        setCityData(countryArray->Cities[countryArray->numberOfCities], newCity->name, newCity->distance, newCity->timeDuration);
        countryArray->numberOfCities++;
        return true;
    }
    else{
        return false;
    }
}

void deleteCountryArray(CountryArray** countryArray){
    for(int i=0;i<(*countryArray)->numberOfCities;i++){
        deleteCity(&(*countryArray)->Cities[i]);
    }
    free((*countryArray)->Cities);
    free(*countryArray);
}

void printCountries(CountryArray* countryArray){
    for(int i=0;i<countryArray->numberOfCities;i++){
        printCity(countryArray->Cities[i], NULL);
        printf("\n");
    }
}
