//
// Created by cigan on 14.10.2020.
//

#ifndef MAXIMUMSUMSEQUENCE_TESTINGIMPLEMENTATION_H
#define MAXIMUMSUMSEQUENCE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_GetMaxOfTwoNumbers_() {

    assert(GetMaxOfTwoNumbers(12, 13) == 13);
    assert(GetMaxOfTwoNumbers(567, 568) == 568);
    assert(GetMaxOfTwoNumbers(1, 1) == 1);
}

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 7;

    Array->OneDimensionalArray[0] = 5;
    Array->OneDimensionalArray[1] = -6;
    Array->OneDimensionalArray[2] = 3;
    Array->OneDimensionalArray[3] = 4;
    Array->OneDimensionalArray[4] = -2;
    Array->OneDimensionalArray[5] = 3;
    Array->OneDimensionalArray[6] = -3;

}

void Test_GetMaximumSumSequence_() {

    OneDimensionalArrayType Array;

    DataSetOne(& Array);

    assert(GetMaximumSumSequence(Array) == 8);
}

#endif //MAXIMUMSUMSEQUENCE_TESTINGIMPLEMENTATION_H
