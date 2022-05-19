//
// Created by timea on 5/17/2022.
//
#include "manager.h"

void airport() {

    FILE *fin, *cntry, *cities1, *cities2, *cities3, *cities4;
    fin = fopen("passengers.txt", "r");
    cntry = fopen("countries.txt", "r");
    cities1 = fopen("cities1.txt", "r");
    cities2 = fopen("cities2.txt", "r");
    cities3 = fopen("cities3.txt", "r");
    cities4 = fopen("cities4.txt", "r");

    if(!fin || !cntry || !cities1 || !cities2 || !cities3 || !cities4){
        //printErrorMessage(FILE_NOT_FOUND);
        exit(10);
    }

    //Create countries
    Country* country1, *country2, *country3, *country4;
    //Create cities
    City *city1, *city2, *city3, *city4, *city5, *city6, *city7;

    //Create country array
    CountryArray* countries;
    createCountryArray(&countries, 10);

    int nrOfCountries, i;
    fscanf(cntry, "%i", &nrOfCountries);
    for(i=0; i<nrOfCountries; i++) {
        int capacity, countryName;
        fscanf(cntry, "%i%i", &capacity, &countryName);
        switch (i) {
            case 0: {
                createCountry(&country1, capacity, countryName);
                createCity(&city1);
                fscanf(cities1, "%s%i%i%i",city1->name, &city1->distance, &city1->time.hour, &city1->time.minute);
                push(country1, city1);
                createCity(&city2);
                fscanf(cities1, "%s%i%i%i",city2->name, &city2->distance, &city2->time.hour, &city2->time.minute);
                push(country1, city2);
                addNewCountry(countries, country1);
                break;
            }
            case 1: {
                createCountry(&country2, capacity, countryName);
                createCity(&city3);
                fscanf(cities2, "%s%i%i%i",city3->name, &city3->distance, &city3->time.hour, &city3->time.minute);
                push(country2, city3);
                addNewCountry(countries, country2);
                break;
            }
            case 2: {
                createCountry(&country3, capacity, countryName);
                createCity(&city4);
                fscanf(cities3, "%s%i%i%i",city4->name, &city4->distance, &city4->time.hour, &city4->time.minute);
                push(country3, city4);
                createCity(&city5);
                fscanf(cities3, "%s%i%i%i",city5->name, &city5->distance, &city5->time.hour, &city5->time.minute);
                push(country3, city5);
                addNewCountry(countries, country3);
                break;
            }
            case 3: {
                createCountry(&country4, capacity, countryName);
                createCity(&city6);
                fscanf(cities4, "%s%i%i%i",city6->name, &city6->distance, &city6->time.hour, &city6->time.minute);
                push(country4, city6);
                createCity(&city7);
                fscanf(cities4, "%s%i%i%i",city7->name, &city7->distance, &city7->time.hour, &city7->time.minute);
                push(country4, city7);
                addNewCountry(countries, country4);
                break;
            }
        }
    }


    //Create flights
    Flight* flight1, *flight2, *flight3, *flight4;
    int flightCapacity=30;
    createFlight(&flight1, flightCapacity);
    createFlight(&flight2, flightCapacity);
    createFlight(&flight3, flightCapacity);
    createFlight(&flight4, flightCapacity);


    //Set flights
    setFlightData(flight1, 2022, 2, 20, 5, 10, 7, 20, city2, 300);
    setFlightData(flight2, 2022, 8, 9, 22, 45, 7, 20, city4, 510);
    setFlightData(flight3, 2022, 5, 13, 1, 20, 3, 30, city2, 150);
    setFlightData(flight4, 2022, 11, 4, 12, 0, 3, 11, city3, 200);


    //Read passengers from file and add them to flights
    for(i=0; i<3; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight1, passenger);
    }

    for(i=3; i<8; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight2, passenger);
    }

    for(i=8; i<11; i++){
        Passenger* passenger;
        createPassenger(&passenger);
        char lName[20], fName[20], nationality[20];
        int gender, year, month, day;
        fscanf(fin, "%s%s%s%i%i%i%i", lName, fName, nationality, &gender, &year, &month, &day);
        setPassengerData(passenger, lName, fName, nationality, gender, year, month, day);
        insertPassenger(flight3, passenger);
    }

    for(i=11; i<16; i++){
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
    insertLast(&flights, flight3);
    insertLast(&flights, flight4);


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
                        printCountries(countries);
                        char country[20];
                        printf("\nEnter the name of the country, you want to travel:\n");
                        scanf("%s", &country);
                        display(findCountryByName(countries, country));
                        char city[20];
                        printf("\n\nChoose a city:\n");
                        scanf("%s", city);
                        bool result2 = printFlightsByCityName(flights, city);
                        if(!result2){
                            printf("\nNo flights found with this destination, please choose an other city\n");
                            break;
                        }
                        //printFlightList(flights);
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
                        bool result = insertPassenger(findFlightInList(flights, id), passenger);
                        if(result){
                            printf("\nPassenger with the ID %i inserted\n", passenger->id);
                            printf("\nSuccessful reservation!\n");
                        }
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
            while(1){
                printf("\nPlease choose between these options:\n 1. Add new city\n 2. Add new country\n 3. Show/modify a flight\n 4. Modify flights list\n 5. Exit\n");
                int choice2;
                scanf("%i", &choice2);
                switch (choice2) {
                    case 1:{
                        printf("\nChoose a country:\n");
                        printCountries(countries);
                        char country[20];
                        scanf("%s", &country);
                        City* newCity;
                        createCity(&newCity);
                        char name[20]; int distance, hour, minute;
                        printf("\n\nPlease enter the name, distance and time duration (hour, minute) of the city:\n");
                        scanf("%s%i%i%i", name, &distance, &hour, &minute);
                        setCityData(newCity, name, distance, hour, minute);
                        push(findCountryByName(countries,country), newCity);
                        break;
                    }
                    case 2:{
                        Country* newCountry;
                        int countryName, capacity;
                        printf("\nPlease enter the name(0-9) and the capacity of the country:\n");
                        scanf("%i%i", &countryName, &capacity);
                        createCountry(&newCountry, capacity, countryName);
                        bool result = addNewCountry(countries, newCountry);
                        if(result){
                            printf("\nCountries updated:\n");
                            printCountries(countries);
                        }
                        break;
                    }
                    case 3:{
                        printFlightList(flights);
                        int id;
                        printf("\nPlease choose a flight by giving its ID:\n");
                        scanf("%i", &id);
                        while(1){
                            printf("\nPlease choose between these options:\n 1. Show seats\n 2. Print all passengers\n 3. Search passenger\n 4. Delete passenger\n 5. Exit\n");
                            int choice3;
                            scanf("%i", &choice3);
                            switch (choice3) {
                                case 1:{
                                    printSeats(findFlightInList(flights, id));
                                    break;
                                }
                                case 2:{
                                    printf("\nPassengers:");
                                    printAllPassengers(findFlightInList(flights, id));
                                    break;
                                }
                                case 3:{
                                    printf("\nPlease enter the ID of the passenger, you would like to find:\n");
                                    int passengerId;
                                    scanf("%i", &passengerId);
                                    int position = searchPassengerById(findFlightInList(flights, id), passengerId);
                                    if(position != -1){
                                        printf("\nPassenger found at position %i\n", position);
                                    }
                                    else{
                                        printf("\nPassenger not found!\n");
                                    }
                                    break;
                                }
                                case 4:{
                                    printf("\nPlease enter the ID of the passenger, you want to be deleted from this flight:\n");
                                    int passengerID;
                                    scanf("%i", &passengerID);
                                    bool result = deletePassengerFromFlight(findFlightInList(flights, id), passengerID);
                                    if(result){
                                        printf("\nPassengers (updated):");
                                        printAllPassengers(findFlightInList(flights, id));
                                    }
                                    break;
                                }
                                case 5:{
                                    return;
                                }
                                default:
                                    printf("\nWrong choice!\n");
                            }
                        }

                    }
                    case 4:{
                        while(1){
                            printf("\nPlease choose between these options:\n1. Create a new flight\n2. Delete first flight\n3. Delete last flight\n4. Show flights\n5. Exit\n");
                            int choice4;
                            scanf("%i", &choice4);
                            switch (choice4) {
                                case 1:{
                                    Flight *newFlight;
                                    int capacity;
                                    printf("\nPlease enter the capacity of the new flight:\n");
                                    scanf("%i", &capacity);
                                    createFlight(&newFlight, capacity);
                                    int year, month, day, price, hour1, minute1, hour2, minute2;
                                    char cityName[20];
                                    printf("\nPlease enter the date (year, month, day):\n");
                                    scanf("%i%i%i", &year, &month, &day);
                                    printf("\nPlease enter the takeoff and landing time (hour, minute):\n");
                                    scanf("%i%i%i%i", &hour1, &minute1, &hour2, &minute2);
                                    printf("\nPlease enter the price:\n");
                                    scanf("%i", &price);
                                    City* newCity;
                                    createCity(&newCity);
                                    char name[20]; int distance, hour, minute;
                                    printf("\nPlease enter the name, distance and time duration (hour, minute) of the city:\n");
                                    scanf("%s%i%i%i", name, &distance, &hour, &minute);
                                    setCityData(newCity, name, distance, hour, minute);
                                    setFlightData(newFlight, year, month, day, hour1, minute1, hour2, minute2, newCity, price);
                                    insertLast(&flights, newFlight);
                                    printf("\nFlight successfully added\n");
                                    break;
                                }
                                case 2:{
                                    printf("\nFollowing flight deleted:\n");
                                    printFlightDetails(removeFirst(&flights));
                                    break;
                                }
                                case 3:{
                                    printf("\nFollowing flight deleted:\n");
                                    printFlightDetails(removeLast(&flights));
                                    break;
                                }
                                case 4:{
                                    printf("\nFlights:");
                                    printFlightList(flights);
                                    break;
                                }
                                case 5:{
                                    return;
                                }
                                default:
                                    printf("\nWrong choice!\n");
                            }
                        }


                    }
                    case 5:{
                        return;
                    }
                    default:printf("\nWrong choice!\n");

                }
            }
        }

        default:
            printf("\nWrong choice!\n");
    }
}

