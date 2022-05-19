//
// Created by timea on 5/17/2022.
//

#include "country.h"


char* getCountry(enum Countries name){
    switch (name){
        case FRANCE:
            return "France";
            break;
        case SPAIN:
            return "Spain";
            break;
        case CANADA:
            return "Canada";
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
        case UK:
            return "UK";
            break;
        default:
            return "Undefined";
    }
}

void createCountry(Country** country, int capacity, enum Countries name){
    *country = (Country*)malloc(sizeof(Country));
    if(!(*country)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    (*country)->cities = (City**) malloc(capacity*sizeof (City*));
    for(int i=0; i<capacity; i++){
        (*country)->cities[i] = (City*) malloc(capacity*sizeof(City));
    }
    (*country)->top = -1;
    (*country)->capacity = capacity;
    (*country)->name = name;
    (*country)->counter = 0;
}

void push(Country* country, City* city){
    if(country == NULL){
        printf("error");
    }
    if(!isFull(country)){
        country->top++;
        country->counter++;
        strcpy(country->cities[country->top]->name, city->name);
        country->cities[country->top]->time.hour = city->time.hour;
        country->cities[country->top]->time.minute = city->time.minute;
        country->cities[country->top]->distance = city->distance;
    }
    else{
        printf("\nYou can't add more cities to %s!\n", getCountry(country->name));
    }

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
    if(country->top >= country->capacity-1){
        return true;
    }
    return false;
}

void display(Country* country){
    if(country == NULL){
        printf("Null");
    }
    if(country->top == -1){
        printf("There are no cities!");
    }
    else{
        for(int i=0; i<=country->top; i++){
            if(country->cities[i] != NULL){
                printCity(country->cities[i]);
            }
        }
    }
}

void freeCountryStack(Country* country) {
    for(int i=0; i<country->top; i++){
        deleteCity(&country->cities[country->top]);
    }
    free(country);
}

void setCities(Country *toCountry, Country *fromCountry) {
    for(int i=0; i<fromCountry->top; i++){
        setCityData(toCountry->cities[i], fromCountry->cities[i]->name, fromCountry->cities[i]->distance, fromCountry->cities[i]->time.hour, fromCountry->cities[i]->time.minute);
    }
}
