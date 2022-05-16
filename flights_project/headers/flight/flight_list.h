//
// Created by timea on 5/15/2022.
//

#ifndef FLIGHTSPROJECT_FLIGHT_LIST_H
#define FLIGHTSPROJECT_FLIGHT_LIST_H

#include "flight.h"

typedef struct FlightNode {
    Flight* flightValue;
    struct FlightNode* next;
}FlightNode;

void createFlightNode(FlightNode** flightNode, Flight* flightValue);
void printFlightList(FlightNode* flightNode);
Flight* findFlightInList(FlightNode* flightNode, int flightId);
void insertFirst(FlightNode** flightNode, Flight* flightValue);
void insertLast(FlightNode** flightNode, Flight* flightValue);
Flight* removeFirst(FlightNode** flightNode);
Flight* removeLast(FlightNode* flightNode);
void deleteFlightList(FlightNode** flightNode);

#endif //FLIGHTSPROJECT_FLIGHT_LIST_H
