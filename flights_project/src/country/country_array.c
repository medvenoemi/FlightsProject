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
        (*countryArray)->Countries[i]->cities = (City**) malloc(capacity*sizeof (City*));
        for(int j=0; j<capacity; j++){
            (*countryArray)->Countries[i]->cities[j] = (City*) malloc(capacity*sizeof(City));
        }
    }
    (*countryArray)->numberOfCountries = 0;
    (*countryArray)->capacity = capacity;
}

bool addNewCountry(CountryArray* countryArray, Country * newCountry){
    for(int i=0; i<countryArray->numberOfCountries; i++){
        if(countryArray->Countries[i]->name == newCountry->name){
            printf("\nThis country already exists (%s)!\n", getCountry(countryArray->Countries[i]->name));
            return false;
        }
    }
    if(countryArray->numberOfCountries < countryArray->capacity){
        countryArray->Countries[countryArray->numberOfCountries]->name = newCountry->name;
        countryArray->Countries[countryArray->numberOfCountries]->top = newCountry->top;
        countryArray->Countries[countryArray->numberOfCountries]->counter = newCountry->counter;
        countryArray->Countries[countryArray->numberOfCountries]->capacity = newCountry->capacity;
        for(int i=0; i<newCountry->counter; i++){
            setCityData(countryArray->Countries[countryArray->numberOfCountries]->cities[i],
                        newCountry->cities[i]->name, newCountry->cities[i]->distance,
                        newCountry->cities[i]->time.hour, newCountry->cities[i]->time.minute);
        }
        countryArray->numberOfCountries = countryArray->numberOfCountries + 1;
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
        if(countryArray->Countries[i]->top == -1){
            printf("There are no cities!");
            continue;
        }
        else{
            for(int j=0; j<=countryArray->Countries[i]->top; j++){
                printCity(countryArray->Countries[i]->cities[j]);
            }
        }
    }
}

void printCountries(CountryArray *countryArray) {
    for(int i=0; i<countryArray->numberOfCountries; i++){
        printf("\n%s",getCountry(countryArray->Countries[i]->name));
    }
    printf("\n");
}

Country *findCountryByName(CountryArray *countryArray, char* countryName) {
    for(int i=0; i<countryArray->numberOfCountries; i++){
        if(strcmp((getCountry(countryArray->Countries[i]->name)), countryName) == 0){
            return countryArray->Countries[i];
        }
    }
    return NULL;
}

Country *findCountryByType(CountryArray *countryArray, enum Countries type) {
    for(int i=0; i<countryArray->numberOfCountries; i++){
        if(countryArray->Countries[i]->name == type){
            return countryArray->Countries[i];
        }
    }
    return NULL;
}


