//
// Created by timea on 5/15/2022.
//
#include "flight_list.h"

void createFlightNode(FlightNode** flightNode, Flight *flightValue) {
    *flightNode = (FlightNode*)malloc(sizeof(FlightNode));
    if(!(*flightNode)){
        //printErrorMessages(MEMORY_ALLOCATION);
    }
    (*flightNode)->next = NULL;
    createFlight(&(*flightNode)->flightValue, flightValue->capacity);
    setFlightData((*flightNode)->flightValue, flightValue->date.year, flightValue->date.month,
                  flightValue->date.day, flightValue->takeOff.hour, flightValue->takeOff.minute,
                  flightValue->landing.hour, flightValue->landing.minute,
                  flightValue->destination, flightValue->price);
}

void insertFirst(FlightNode** flightNode, Flight* flightValue){
    FlightNode* newFlightNode;
    createFlightNode(&newFlightNode, flightValue);
    newFlightNode->next = *flightNode;
    *flightNode = newFlightNode;
}

void insertLast(FlightNode** flightNode, Flight* flightValue){
    FlightNode* newFlightNode;
    createFlightNode(&newFlightNode, flightValue);
    newFlightNode->next = NULL;
    if(*flightNode == NULL){
        *flightNode = newFlightNode;
    }
    else{
        FlightNode* p = *flightNode;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = newFlightNode;
    }
}

Flight* removeFirst(FlightNode** flightNode){
    if(*flightNode != NULL){
        FlightNode * p = *flightNode;
        *flightNode = (*flightNode)->next;
        return p->flightValue;
    }
    else{
        return NULL;
    }
}

Flight* removeLast(FlightNode* flightNode){
    if(flightNode != NULL){
        FlightNode* p = flightNode;
        while(p->next->next != NULL){
            p = p->next;
        }
        FlightNode* q = p->next;
        p->next = NULL;
        return q->flightValue;
    }
    return NULL;
}

Flight* findFlightInList(FlightNode* flightNode, int flightId){
    if(flightNode != NULL){
        FlightNode* p = flightNode;
        while(p != NULL){
            if(p->flightValue->flightId == flightId){
                return p->flightValue;
            }
            p = p->next;
        }
    }
    return NULL;
}

/*
Flight **findFlightByCityName(FlightNode *flightNode, char *city) {
    Flight** foundFlights = (Flight**) malloc(flightNode->flightValue->capacity, )
    if(flightNode != NULL){
        FlightNode* p = flightNode;
        while(p != NULL){
            if(strcmp(flightNode->flightValue->destination->name, city) != 0){
                return p->flightValue;
            }
            p = p->next;
        }
    }
    return NULL;
}
 */

void printFlightList(FlightNode *flightNode) {
    FlightNode* p = flightNode;
    while(p != NULL){
        printFlightDetails(p->flightValue);
        p = p->next;
    }
}

void deleteFlightList(FlightNode **flightNode) {
    if(*flightNode != NULL){
        FlightNode* p = *flightNode;
        while(*flightNode != NULL){
            p = *flightNode;
            *flightNode = (*flightNode)->next;
            free(p);
        }
    }
}




