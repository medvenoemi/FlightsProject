//
// Created by Noemi on 2022. 05. 14..
//

#include "errors.h"
#include <stdio.h>

void printErrorMessage(enum ErrorType type) {
    if(type==FILE_NOT_FOUND){
        printf(" There was a problem opening the file!\n");
    }

    if(type==MEMORY_ALLOCATION){
        printf(" There was a problem allocating the memory!\n");
    }

    if(type==MISSING){
        printf(" There is nothing to show!\n");
    }

    if(type==UNSUCCESSFUL_OPERATION){
        printf(" Unsuccessful operation\n");
    }
}
