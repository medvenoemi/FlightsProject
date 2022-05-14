//
// Created by Noemi on 2022. 05. 10..
//

#include "country.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getCountry(enum Countries name){
    switch (name){
        case FRANCE:
            return "France";
            break;
        case SPAIN:
            return "Spain";
            break;
        case UNITED_STATES:
            return "United States";
            break;
        case CHINA:
            return "China";
            break;
        case ITALY:
            return "Italy";
            break;
        case TURKEY:
            return "Turkey";
            break;
        case MEXICO:
            return "Mexico";
            break;
        case THAILAND:
            return "Thailand";
            break;
        case GERMANY:
            return "Germany";
            break;
        case UNITED_KINGDOM:
            return "United Kingdom";
            break;
        default:
            return "Undifined";
    }
}

void createCountry(Country** country, unsigned int capacity, enum Countries name){
    *country = (Country*)malloc(sizeof (Country));
    if(!(*country)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    (*country)->top = -1;
    (*country)->capacity = capacity;
    (*country)->name = name;
    (*country)->cities = (City**) malloc(capacity*sizeof (City*));
    for(int i=0; i<capacity; i++){
        createCity((*country)->cities);
    }
}

void push(Country* country, City* city){
    country->top++;
    strcpy(country->cities[country->top]->name, city->name);
    country->cities[country->top]->timeDuration = city->timeDuration;
    country->cities[country->top]->distance = city->distance;
}

void pop(Country* country){
    if(!isEmpty(country)){
        deleteCity(&country->cities[country->top]);
        country->top--;
    }
}

City* top(Country* country){
    if(!isEmpty(country)) {
        return (country->cities[country->top]);
    }
    //printErrorMessage(MISSING);
    return NULL;
}

bool isEmpty(Country* country) {
    if(country->top == -1){
        return true;
    }
    return false;
}

bool isFull(Country* country){
    if(country->top >= country->capacity){
        return true;
    }
    return false;
}

void display(Country* country){
    if(country->top == -1){
        printf("There are no countries!");
    }
    else{
        for(int i=top; i>0; i--){
            printf("%d\n", country[i]);
        }
    }
}

void freeCountryStack(Country* country) {
    for(int i=0; i<country->top; i++){
        deleteCity(&country->cities[country->top]);
    }
    free(country);
}