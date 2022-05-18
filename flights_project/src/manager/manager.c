//
// Created by timea on 5/17/2022.
//
#include "manager.h"

void airport() {

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
    addNewCountry(countries, country1);
    addNewCountry(countries, country2);
    addNewCountry(countries, country3);
    addNewCountry(countries, country4);


    //Create flights
    Flight* flight1, *flight2, *flight3, *flight4;
    createFlight(&flight1, 30);
    createFlight(&flight2, 30);
    createFlight(&flight3, 30);
    createFlight(&flight4, 30);


    //Set flights
    setFlightData(flight1, 2022, 2, 20, 5, 10, 7, 20, city2, 300);
    setFlightData(flight2, 2022, 8, 0, 22, 45, 7, 20, city4, 510);



    //Read passengers from file and add them to flights
    FILE *fin = fopen("passengers.txt", "r");
    if(!fin){
        //printErrorMessage(FILE_NOT_FOUND);
        exit(10);
    }

    for(int i=0; i<3; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight1, passenger);
    }

    for(int i=3; i<8; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight2, passenger);
    }

    for(int i=8; i<11; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight3, passenger);
    }

    for(int i=11; i<16; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight4, passenger);
    }


    //Create flight list and add flights
    FlightNode* flights;
    createFlightNode(&flights, flight1);
    insertLast(&flights, flight2);
    //insertLast(&flights, flight3);
    //insertLast(&flights, flight4);

    printAllCities(countries);



    int choice;
    printf("\n\nPlease choose between passenger or system view (0-Passenger, 1-System):\n");
    scanf("%i", &choice);
    switch (choice) {
        case 0:{
            while(1) {
                int choice1;
                printf("\nPlease choose between these options:\n 1. Show countries\n 2. Show calendar\n 3. Show all flights\n 4. Reservation\n 5. Exit\n");
                scanf("%d", &choice1);
                switch (choice1) {
                    case 1: {
                        printf("\nCountries:\n");
                        printCountries(countries);
                        break;
                    }
                    case 2: {
                        printf("\nWhich year?\n");
                        int year;
                        scanf("%i", &year);
                        printCalendar(year);
                        break;
                    }
                    case 3: {
                        printFlightList(flights);
                        break;
                    }
                    case 4: {
                        printf("\nChoose one of these cities please:\n");
                        printAllCities(countries);
                        char city[20];
                        scanf("%s", city);
                        printFlightsByCityName(flights, city);
                        printf("\nChoose a flight by its ID.\n");
                        int id;
                        scanf("%i", &id);
                        printf("\nPlease enter your first and last name:\n");
                        char fName[20], lName[20];
                        scanf("%s%s", fName, lName);
                        printf("\nPlease enter your nationality:\n");
                        char nationality[20];
                        scanf("%s", nationality);
                        printf("\nPlease enter your gender (0-Female, 1-Male):\n");
                        int gender;
                        scanf("%i", &gender);
                        printf("\nPlease enter your birthdate (year, month, day):\n");
                        int year, month, day;
                        scanf("%i%i%i", &year, &month, &day);
                        Passenger *passenger;
                        createPassenger(&passenger);
                        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
                        Flight *flight;
                        insertPassenger(findFlightInList(flights, id), passenger);
                        printf("\nSuccessful reservation!\n");
                        break;
                    }
                    case 5: {
                        return;
                    }
                    default:
                        printf("\nWrong choice!\n");
                }
            }
        }
        case 1:{
            printf("Please choose between these options:\n 1. Add new city\n 2. Add new country\n 3. Modify a flight\n 4. Modify flights\n 5. Exit\n");
            int choice2;
            scanf("%i", &choice2);
            switch (choice2) {
                case 1:{
                    printf("\nChoose a country (0-9):\n");
                    int country;
                    scanf("%i", &country);
                    City* newCity;
                    createCity(&newCity);
                    char name[20]; int distance, hour, minute;
                    printf("\nPlease enter the name, distance and time duration (hour, minute):\n");
                    scanf("%s%i%i%i", name, &distance, &hour, &minute);
                    setCityData(newCity, name, distance, hour, minute);
                    push(findCountryByName(countries,country), newCity);
                    break;
                }
                case 2:{
                    Country* newCountry;
                    int countryName, capacity;
                    printf("\nPlease enter the name(0-9) and the capacity of the country:\n");
                }


            }
        }

        default:
            printf("\nWrong choice!\n");
    }
}

