//
// Created by Acer on 5/9/2022.
//

#ifndef FLIGHTSPROJECT_FLIGHT_H
#define FLIGHTSPROJECT_FLIGHT_H

#include "passenger.h"
#include "stdlib.h"
#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int year, month, day;
}Date;

typedef struct{
    int hour, minute;
}TakeOff;

typedef struct{
    int hour, minute;
}Landing;

typedef struct Flight{
    int flightId;
    int price;
    Date date;
    TakeOff takeOff;
    Landing landing;
    City* destination;
    Passenger** table;
    int capacity, numberOfPassengers;
}Flight;

void createFlight(Flight** flight,int capacity);
void setFlightData(Flight* flight, int year, int month, int day, int takeOffHour, int takeOffMinute,int landingHour, int landingMinute, City* city, int price);
bool insertPassenger(Flight* flight, Passenger* passenger);
void printAllPassengers(Flight* flight);
void printFlightDetails(Flight* flight);
void printSeats(Flight* flight);
int searchPassengerById(Flight* flight, int id);
bool deletePassengerFromFlight(Flight* flight, int id);
void deleteFlight(Flight** flight);
void messageToPassengers(Flight* flight);



#endif //FLIGHTSPROJECT_FLIGHT_H
