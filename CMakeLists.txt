cmake_minimum_required(VERSION 3.20)
project(FlightsProject C)

set(CMAKE_C_STANDARD 11)

add_executable(FlightsProject main.c flights_project/headers/country flights_project/src/country flights_project/headers/country/country_array.h flights_project/src/country/country_array.c flights_project/headers/country/city.h flights_project/src/country/city.c flights_project/headers/calendar/calendar.h flights_project/src/calendar/calendar.c flights_project/headers/passenger/passenger.h flights_project/src/passenger/passenger.c flights_project/headers/passenger/passenger.h flights_project/headers/flight/flight.h flights_project/src/flight/flight.c flights_project/headers/flight/flight_list.h flights_project/src/flight/flight_list.c flights_project/headers/manager/manager.h flights_project/src/manager/manager.c flights_project/headers/country/country.h flights_project/src/country/country.c)

include_directories(
        flights_project/headers/country
        flights_project/headers/calendar
        flights_project/headers/passenger
        flights_project/headers/flight
        flights_project/headers/manager
        shared/headers
)
