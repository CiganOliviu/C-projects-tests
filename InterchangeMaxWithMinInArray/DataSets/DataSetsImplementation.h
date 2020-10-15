//
// Created by cigan on 15.10.2020.
//

#ifndef INTERCHANGEMAXWITHMININARRAY_DATASETSIMPLEMENTATION_H
#define INTERCHANGEMAXWITHMININARRAY_DATASETSIMPLEMENTATION_H

#include "DataSetsDef.h"

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 12;
    Array->OneDimensionalArray[1] = -12;
    Array->OneDimensionalArray[2] = 13;
    Array->OneDimensionalArray[3] = 234;
    Array->OneDimensionalArray[4] = -5;
}

void DataSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = 7;
    Array->OneDimensionalArray[1] = 1;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = -4;
    Array->OneDimensionalArray[4] = 3;
    Array->OneDimensionalArray[5] = -2;
    Array->OneDimensionalArray[6] = -6;
}

void ExpectedSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 12;
    Array->OneDimensionalArray[1] = 234;
    Array->OneDimensionalArray[2] = 13;
    Array->OneDimensionalArray[3] = -12;
    Array->OneDimensionalArray[4] = -5;
}

void ExpectedSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = -6;
    Array->OneDimensionalArray[1] = 1;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = -4;
    Array->OneDimensionalArray[4] = 3;
    Array->OneDimensionalArray[5] = -2;
    Array->OneDimensionalArray[6] = 7;
}


#endif //INTERCHANGEMAXWITHMININARRAY_DATASETSIMPLEMENTATION_H
