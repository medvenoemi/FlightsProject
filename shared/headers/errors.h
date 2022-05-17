//
// Created by Noemi on 2022. 05. 14..
//

#ifndef FLIGHTSPROJECT_ERRORS_H
#define FLIGHTSPROJECT_ERRORS_H

enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
    MISSING,
    UNSUCCESSFUL_OPERATION
};

void printErrorMessage(enum ErrorType type);

#endif //FLIGHTSPROJECT_ERRORS_H
