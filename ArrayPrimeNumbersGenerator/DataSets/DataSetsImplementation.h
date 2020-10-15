//
// Created by cigan on 15.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_DATASETSIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_DATASETSIMPLEMENTATION_H

#include "DataSetsDef.h"

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 2;
    Array->OneDimensionalArray[1] = 3;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 7;
    Array->OneDimensionalArray[4] = 11;
}

void DataSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 10;

    Array->OneDimensionalArray[0] = 2;
    Array->OneDimensionalArray[1] = 3;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 7;
    Array->OneDimensionalArray[4] = 11;
    Array->OneDimensionalArray[5] = 13;
    Array->OneDimensionalArray[6] = 17;
    Array->OneDimensionalArray[7] = 19;
    Array->OneDimensionalArray[8] = 23;
    Array->OneDimensionalArray[9] = 29;
}

#endif //ARRAYPRIMENUMBERSGENERATOR_DATASETSIMPLEMENTATION_H
