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
        //printErrorMessages(MEMORY_ALLOCATION);
    }
}

void setPassengerData(Passenger* passenger, char* name, char* nationality,
                      enum Gender gender, BirthDate birthDate){
    passenger->id = ++numberOfPassengers;
    strcpy(passenger->name, name);
    strcpy(passenger->nationality, nationality);
    passenger->gender = gender;
    passenger->birthDate.year = birthDate.year;
    passenger->birthDate.month = birthDate.month;
    passenger->birthDate.day = birthDate.day;
}

void printPassenger(Passenger *passenger) {
    if(passenger == NULL){
        //printErrorMessages(NULL_POINTER_EXCEPTION);
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

