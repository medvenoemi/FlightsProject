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


