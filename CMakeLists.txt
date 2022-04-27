cmake_minimum_required(VERSION 3.20)
project(FlightsProject C)

set(CMAKE_C_STANDARD 11)

add_executable(FlightsProject main.c flights_project/headers/country flights_project/src/country flights_project/headers/country/country_array.h flights_project/src/country/country_array.c flights_project/headers/country/city.h flights_project/src/country/city.c flights_project/headers/calendar/calendar.h flights_project/src/calendar/calendar.c)

include_directories(
        flights_project/headers/country
        flights_project/headers/calendar
        shared/headers
)
