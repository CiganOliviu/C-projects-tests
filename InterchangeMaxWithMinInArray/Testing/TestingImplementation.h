//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

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

void Test_GetMinValuePositionOneDimensionalArray_() {

    OneDimensionalArrayType ArraySetOne, ArraySetTwo;

    DataSetOne(&ArraySetOne);
    DataSetTwo(&ArraySetTwo);

    assert(GetMinValuePositionOneDimensionalArray(ArraySetOne) == 1);
    assert(GetMinValuePositionOneDimensionalArray(ArraySetTwo) == 6);
}

void Test_GetMaxValuePositionOneDimensionalArray_() {

    OneDimensionalArrayType ArraySetOne, ArraySetTwo;

    DataSetOne(&ArraySetOne);
    DataSetTwo(&ArraySetTwo);

    assert(GetMaxValuePositionOneDimensionalArray(ArraySetOne) == 3);
    assert(GetMaxValuePositionOneDimensionalArray(ArraySetTwo) == 0);
}

void Test_SwapElements_() {

    int ParameterOne, ParameterTwo;

    ParameterOne = 12;
    ParameterTwo = 13;

    SwapElements(&ParameterOne, &ParameterTwo);

    assert(ParameterOne == 13);
    assert(ParameterTwo == 12);
}

void Test_InterchangeMaxWithMinInArray_() {

    OneDimensionalArrayType ArraySetOne, ExpectedArrayOne, ArraySetTwo, ExpectedArrayTwo;

    DataSetOne(&ArraySetOne);
    ExpectedSetOne(&ExpectedArrayOne);

    InterchangeMaxWithMinInArray(&ArraySetOne);

    if (!AssertOneDimensionalArray(ArraySetOne, ExpectedArrayOne))
        FAIL_EXIT;

    DataSetTwo(&ArraySetTwo);
    ExpectedSetTwo(&ExpectedArrayTwo);

    InterchangeMaxWithMinInArray(&ArraySetTwo);

    if (!AssertOneDimensionalArray(ArraySetTwo, ExpectedArrayTwo))
        FAIL_EXIT;

}

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
