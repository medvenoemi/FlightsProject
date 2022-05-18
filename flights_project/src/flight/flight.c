//
// Created by Acer on 5/9/2022.
//

#include "flight.h"

int numberOfFlights = 10000;

void createFlight(Flight** flight, int capacity) {
    *flight = (Flight*) malloc(sizeof(Flight));
    if(!(*flight)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    (*flight)->table = (Passenger**) malloc(capacity*sizeof(Passenger*));
    if(!(*flight)->table){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    for(int i=0; i<capacity; i++){
        createPassenger(&(*flight)->table[i]);
        (*flight)->table[i]->id = -1;
    }
    createCity(&(*flight)->destination);
    (*flight)->capacity = capacity;
    (*flight)->numberOfPassengers = 0;
    (*flight)->flightId = ++numberOfFlights;
}

void setFlightData(Flight* flight, int year, int month, int day, int takeOffHour, int takeOffMinute,
                   int landingHour, int landingMinute, City* city, int price){
    flight->date.year = year;
    flight->date.month = month;
    flight->date.day = day;
    flight->takeOff.hour = takeOffHour;
    flight->takeOff.minute = takeOffMinute;
    flight->landing.hour = landingHour;
    flight->landing.minute = landingMinute;
    setCityData(flight->destination, city->name, city->distance, city->time.hour, city->time.minute);
    flight->price = price;
}

void insertPassenger(Flight* flight, Passenger* passenger) {
    int j, i=0;
    do{
        j = (passenger->id + i) % flight->capacity;
        if(flight->table[j]->id == -1){
            setPassengerData(flight->table[j], passenger->name.lastName, passenger->name.firstName, passenger->nationality, passenger->gender, passenger->birthDate.year, passenger->birthDate.month, passenger->birthDate.day);
            flight->table[j]->seat = j;
            flight->table[j]->id = passenger->id;
            printf("\nPassenger with the ID %i inserted\n", passenger->id);
            return;
        }
        else{
            i++;
        }
    }
    while(i != flight->capacity);
    printf("\nFlight is full!\n");    //ha nem sikerult a beszuras
    return;
}

int searchPassengerById(Flight* flight, int id){
    int j, i=0;
    do{
        j = (id + i) % flight->capacity;
        if(flight->table[j]->id == id){
            return j;    //megtalalt elem indexe
        }
        else{
            i++;
        }
    }
    while((flight->table[j]->id != -1) && (i != flight->capacity));
    return -1;    //ha nincs benne a keresett elem
}

void deletePassengerFromFlight(Flight* flight, int id){
    int j, i=0;
    j = (id + i) % flight->capacity;
    if(flight->table[j]->id == -1){
        printf("\nThe passenger with this ID does not exist!\n");
        return;
    }
    else{
        flight->table[j]->id = -1;
        flight->numberOfPassengers--;
        printf("\nPassenger with the ID %i deleted!\n", id);
    }
}

void printAllPassengers(Flight* flight){
    if(flight->numberOfPassengers == 0){
        printf("\nFlight is empty!\n");
    }
    else{
        for(int i=0; i<flight->capacity; i++){
            if(flight->table[i]->id == -1){
                continue;
            }
            else{
                printPassenger(flight->table[i]);
            }
        }
    }
}


void printFlightDetails(Flight* flight){
    if(flight == NULL){
        //printErrorMessage(NULL_POINTER_EXCEPTION);
        printf("Null pointer!");
    }
    else{
        printf("\nFlight details:\n"
               "\t - ID: %i\n"
               "\t - DESTINATION: %s\n"
               "\t - DATE: %i/%i/%i\n"
               "\t - TAKEOFF: %i:%i\n"
               "\t - LANDING: %i:%i\n"
               "\t - PRICE: %i\n",
               flight->flightId, flight->destination, flight->date.year, flight->date.month, flight->date.day,
               flight->takeOff.hour, flight->takeOff.minute, flight->landing.hour, flight->landing.minute,
               flight->price);
    }
}


void deleteFlight(Flight** flight){
    if(*flight){
        messageToPassengers(*flight);
        printf("\nFLIGHT WITH THE ID %i DELETED!\n", (*flight)->flightId);
        for(int i=0; i<(*flight)->capacity; i++){
            free((*flight)->table[i]);
        }
        free((*flight)->table);
        free(*flight);
    }
}

void messageToPassengers(Flight *flight) {
    if(flight->numberOfPassengers == 0){
        printf("\nNo passengers found!\n");
    }
    else{
        printf("\nMessage to:\n");
        for(int i=0; i<flight->capacity; i++){
            if(flight->table[i]->id == -1){
                continue;
            }
            else{
                printf("%s, ", flight->table[i]->name);
            }
        }
    }
}

