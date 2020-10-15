//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_IsPrime_() {

    assert(IsPrime(13) == SUCCESS_CODE);
    assert(IsPrime(24) == FAIL_CODE);
    assert(IsPrime(31) == SUCCESS_CODE);
}

void Test_SwapElements_() {

    int ParameterOne, ParameterTwo;

    ParameterOne = 12;
    ParameterTwo = 13;

    SwapElements(&ParameterOne, &ParameterTwo);

    assert(ParameterOne == 13);
    assert(ParameterTwo == 12);
}

void Test_SortPrimeValuesOnlyFromArray_() {

    OneDimensionalArrayType ArraySetOne, ExpectedSetOne, ArraySetTwo, ExpectedSetTwo;

    DataSetOne(&ArraySetOne);

    SortPrimeValuesOnlyFromArray(&ArraySetOne);
    ExpectedSetOne_SortPrimeValuesOnlyFromArray_(&ExpectedSetOne);

    if (!AssertOneDimensionalArray(ArraySetOne, ExpectedSetOne))
        FAIL_EXIT;

    DataSetTwo(&ArraySetTwo);

    SortPrimeValuesOnlyFromArray(&ArraySetTwo);
    ExpectedSetTwo_SortPrimeValuesOnlyFromArray_(&ExpectedSetTwo);

    if (!AssertOneDimensionalArray(ArraySetTwo, ExpectedSetTwo))
        FAIL_EXIT;
}

void Test_SortArrayWithoutThePrimeValues_() {

    OneDimensionalArrayType ArraySetOne, ExpectedSetOne, ArraySetTwo, ExpectedSetTwo;

    DataSetOne(&ArraySetOne);

    SortArrayWithoutThePrimeValues(&ArraySetOne);
    ExpectedSetOne_SortArrayWithoutThePrimeValues_(&ExpectedSetOne);

    if (!AssertOneDimensionalArray(ArraySetOne, ExpectedSetOne))
        FAIL_EXIT;

    DataSetTwo(&ArraySetTwo);

    SortArrayWithoutThePrimeValues(&ArraySetTwo);
    ExpectedSetTwo_SortArrayWithoutThePrimeValues_(&ExpectedSetTwo);


    if (!AssertOneDimensionalArray(ArraySetTwo, ExpectedSetTwo))
        FAIL_EXIT;
}

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
