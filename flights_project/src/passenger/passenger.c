//
// Created by Acer on 5/9/2022.
//

#include "passenger.h"

int numberOfPassengers = 0;

char *getGender(enum Gender type) {
    switch (type){
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            return "Undefined";
    }
}

void createPassenger(Passenger** passenger) {
    *passenger = (Passenger*) malloc(sizeof(Passenger));
    if(!(*passenger)){
        //printErrorMessage(MEMORY_ALLOCATION);
    }
    (*passenger)->id = ++numberOfPassengers;

}

void setPassengerData(Passenger* passenger, char* lastName, char* firstName, char* nationality,
                      enum Gender gender, int year, int month, int day){
    strcpy(passenger->name.lastName, lastName);
    strcpy(passenger->name.firstName, firstName);
    strcpy(passenger->nationality, nationality);
    passenger->gender = gender;
    passenger->birthDate.year = year;
    passenger->birthDate.month = month;
    passenger->birthDate.day = day;
}

void printPassenger(Passenger *passenger) {
    if(passenger == NULL){
        //printErrorMessage(NULL_POINTER_EXCEPTION);
        printf("\nNULL POINTER\n");
    }
    else{
        printf("\n%s details:\n"
               "\t - ID: %i\n"
               "\t - GENDER: %s\n"
               "\t - NATIONALITY: %s\n"
               "\t - BIRTH DATE: %i/%i/%i\n",
               passenger->name, passenger->id, getGender(passenger->gender), passenger->nationality, passenger->birthDate.year, passenger->birthDate.month, passenger->birthDate.day);
    }
}

void deletePassenger(Passenger **passenger){
    printf("\nPassenger with the ID %i deleted.\n", (*passenger)->id);
    free(*passenger);
}


