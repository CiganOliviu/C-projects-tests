//
// Created by cigan on 15.10.2020.
//

#ifndef SORTONEDIMENSIONALARRAYINPARTS_DATASETSIMPLEMENTATION_H
#define SORTONEDIMENSIONALARRAYINPARTS_DATASETSIMPLEMENTATION_H

#include "DataSetsDef.h"

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = 7;
    Array->OneDimensionalArray[1] = 6;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 4;
    Array->OneDimensionalArray[4] = 3;
    Array->OneDimensionalArray[5] = 2;
    Array->OneDimensionalArray[6] = 1;

}

void DataSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 12;
    Array->OneDimensionalArray[1] = 21;
    Array->OneDimensionalArray[2] = 15;
    Array->OneDimensionalArray[3] = 13;
    Array->OneDimensionalArray[4] = 7;
}

void ExpectedSetOne_SortPrimeValuesOnlyFromArray_(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = 1;
    Array->OneDimensionalArray[1] = 6;
    Array->OneDimensionalArray[2] = 2;
    Array->OneDimensionalArray[3] = 4;
    Array->OneDimensionalArray[4] = 3;
    Array->OneDimensionalArray[5] = 5;
    Array->OneDimensionalArray[6] = 7;
}

void ExpectedSetTwo_SortPrimeValuesOnlyFromArray_(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 12;
    Array->OneDimensionalArray[1] = 21;
    Array->OneDimensionalArray[2] = 15;
    Array->OneDimensionalArray[3] = 7;
    Array->OneDimensionalArray[4] = 13;
}

void ExpectedSetOne_SortArrayWithoutThePrimeValues_(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = 7;
    Array->OneDimensionalArray[1] = 4;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 6;
    Array->OneDimensionalArray[4] = 3;
    Array->OneDimensionalArray[5] = 2;
    Array->OneDimensionalArray[6] = 1;
}

void ExpectedSetTwo_SortArrayWithoutThePrimeValues_(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 12;
    Array->OneDimensionalArray[1] = 15;
    Array->OneDimensionalArray[2] = 21;
    Array->OneDimensionalArray[3] = 13;
    Array->OneDimensionalArray[4] = 7;
}

#endif //SORTONEDIMENSIONALARRAYINPARTS_DATASETSIMPLEMENTATION_H
