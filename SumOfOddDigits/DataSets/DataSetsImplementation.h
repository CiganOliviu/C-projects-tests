//
// Created by cigan on 15.10.2020.
//

#ifndef SUMOFODDDIGITS_DATASETSIMPLEMENTATION_H
#define SUMOFODDDIGITS_DATASETSIMPLEMENTATION_H

#include "DataSetsDef.h"

void SetupDataSet(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 0;
    Array->OneDimensionalArray[1] = 0;
    Array->OneDimensionalArray[2] = 0;
    Array->OneDimensionalArray[3] = 0;
    Array->OneDimensionalArray[4] = 0;
}

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 9;

    Array->OneDimensionalArray[0] = 0;
    Array->OneDimensionalArray[1] = 1;
    Array->OneDimensionalArray[2] = 0;
    Array->OneDimensionalArray[3] = 1;
    Array->OneDimensionalArray[4] = 0;
    Array->OneDimensionalArray[5] = 1;
    Array->OneDimensionalArray[6] = 0;
    Array->OneDimensionalArray[7] = 1;
    Array->OneDimensionalArray[8] = 0;
    Array->OneDimensionalArray[9] = 0;
}

void DataSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 9;

    Array->OneDimensionalArray[0] = 0;
    Array->OneDimensionalArray[1] = 1;
    Array->OneDimensionalArray[2] = 0;
    Array->OneDimensionalArray[3] = 1;
    Array->OneDimensionalArray[4] = 0;
    Array->OneDimensionalArray[5] = 0;
    Array->OneDimensionalArray[6] = 0;
    Array->OneDimensionalArray[7] = 0;
    Array->OneDimensionalArray[8] = 0;
    Array->OneDimensionalArray[9] = 0;
}

#endif //SUMOFODDDIGITS_DATASETSIMPLEMENTATION_H
