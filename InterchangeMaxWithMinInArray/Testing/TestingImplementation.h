//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

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
