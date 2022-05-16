#include <stdio.h>
#include "calendar.h"
#include "city.h"
#include "country.h"
#include "country_array.h"
#include "flight.h"
#include "flight_list.h"
#include "passenger.h"
#include "errors.h"

int main() {

    //Create countries
    Country* country1, *country2, *country3, *country4;
    createCountry(&country1, 3, 0);
    createCountry(&country2, 3, 1);
    createCountry(&country3, 3, 2);
    createCountry(&country4, 3, 3);


    //Create and add cities to countries
    City* city1;
    createCity(&city1);
    setCityData(city1, "Paris", 1997, 2, 28);
    push(country1, city1);

    City* city2;
    createCity(&city2);
    setCityData(city2, "Lyon", 1907, 2, 10);
    push(country1, city2);

    City* city3;
    createCity(&city3);
    setCityData(city3, "Barcelona", 2440, 2, 48);
    push(country2, city3);

    City* city4;
    createCity(&city4);
    setCityData(city4, "Chicago", 8128, 14, 45);
    push(country3, city4);

    City* city5;
    createCity(&city5);
    setCityData(city5, "New York", 7463 , 11, 55);
    push(country3, city5);

    City* city6;
    createCity(&city6);
    setCityData(city6, "Peking", 7042 , 18, 12);
    push(country4, city6);

    City* city7;
    createCity(&city7);
    setCityData(city7, "Hong Kong", 8966 , 14, 57);
    push(country4, city7);


    //Create country array and add all countries
    CountryArray* countries;
    createCountryArray(&countries, 10);
    addNewCountry(countries, country1, 0);
    addNewCountry(countries, country2, 1);
    addNewCountry(countries, country3, 2);
    addNewCountry(countries, country4, 3);


    //Create flights
    Flight* flight1, *flight2, *flight3, *flight4;
    createFlight(&flight1, 30);
    createFlight(&flight2, 30);
    createFlight(&flight3, 30);
    createFlight(&flight4, 30);


    //Set flight
    /*
    Date* date1;
    date1->year = 2022; date1->month = 2; date1->day = 20;
    TakeOff* takeOff1;
    takeOff1->hour = 5; takeOff1->minute = 10;
    Landing* landing1;
    landing1->hour = 7; landing1->minute = 20;
    setFlightData(flight1, date1, takeOff1, landing1, city2, 300);

    */

    //Read passengers from file and add them to flights
    FILE *fin = fopen("passengers.txt", "r");
    if(!fin){
        printErrorMessage(FILE_NOT_FOUND);
        exit(1);
    }

    for(int i=0; i<3; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        fscanf(fin, "%s%s%s%i%i%i%i", passenger->name.lastName, passenger->name.firstName,
               passenger->nationality, passenger->gender, passenger->birthDate.year, passenger->birthDate.month,
               passenger->birthDate.day);
        insertPassenger(flight1, passenger);
    }

    for(int i=3; i<8; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        fscanf(fin, "%s%s%s%i%i%i%i", passenger->name.lastName, passenger->name.firstName,
               passenger->nationality, passenger->gender, passenger->birthDate.year, passenger->birthDate.month,
               passenger->birthDate.day);
        insertPassenger(flight2, passenger);
    }

    for(int i=8; i<11; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        fscanf(fin, "%s%s%s%i%i%i%i", passenger->name.lastName, passenger->name.firstName,
               passenger->nationality, passenger->gender, passenger->birthDate.year, passenger->birthDate.month,
               passenger->birthDate.day);
        insertPassenger(flight3, passenger);
    }

    for(int i=11; i<16; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        fscanf(fin, "%s%s%s%i%i%i%i", passenger->name.lastName, passenger->name.firstName,
               passenger->nationality, passenger->gender, passenger->birthDate.year, passenger->birthDate.month,
               passenger->birthDate.day);
        insertPassenger(flight4, passenger);
    }


    //Create flight list and add flights
    FlightNode* flights;
    insertLast(&flights, flight1);
    insertLast(&flights, flight2);
    insertLast(&flights, flight3);
    insertLast(&flights, flight4);


    int choice;
    printf("\nPlease choose between passenger or system view (0-Passenger, 1-System):\n");
    scanf("%i", &choice);
    switch (choice) {
        case 0:{
            int choice1;
            printf("Please choose between these options:\n 1.show countries(1)\n 2.show calendar(2)\n 3.show all flights(3)\n");
            scanf("%d", &choice1);
            switch (choice1) {
                case 1:{
                    printCountries(countries);
                    break;
                }
                case 2:{
                    printf("\nWhich year?\n");
                    int year;
                    scanf("%i", &year);
                    printCalendar(year);
                    break;
                }
                case 3:{
                    printFlightList(flights);
                    break;
                }
                default:
                    printf("\nWrong choice!\n");
            }
        }
        default:
            printf("\nWrong choice!\n");
    }

    return 0;
}
