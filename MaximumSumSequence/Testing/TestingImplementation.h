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

void Test_GetMaximumSumSequence_() {

    OneDimensionalArrayType Array;

    DataSetOne(& Array);

    assert(GetMaximumSumSequence(Array) == 8);
}

#endif //MAXIMUMSUMSEQUENCE_TESTINGIMPLEMENTATION_H
