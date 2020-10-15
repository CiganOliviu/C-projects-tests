//
// Created by cigan on 14.10.2020.
//

#ifndef SUMOFODDDIGITS_TESTINGIMPLEMENTATION_H
#define SUMOFODDDIGITS_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_IsOdd_() {

    assert(IsOdd(3) == SUCCESS_CODE);
    assert(IsOdd(7) == SUCCESS_CODE);
    assert(IsOdd(69) == SUCCESS_CODE);
    assert(IsOdd(24) == FAIL_CODE);
}

void Test_SetupArray_() {

    OneDimensionalArrayType ArrayToTest, ArrayDataSet;

    SetupDataSet(&ArrayDataSet);

    ArrayToTest.Length = ArrayDataSet.Length;

    SetupArray(&ArrayToTest);

    if (!AssertOneDimensionalArray(ArrayToTest, ArrayDataSet))
        FAIL_EXIT;
}

void TestPhaseOne_GetFrequencyOneDimensionalArray() {

    OneDimensionalArrayType ArrayFrequencyTestOne, ArraySetOne;

    DataSetOne(&ArraySetOne);
    ArrayFrequencyTestOne.Length = ArraySetOne.Length;

    SetupArray(&ArrayFrequencyTestOne);

    GetFrequencyOneDimensionalArray(&ArrayFrequencyTestOne, 113575);

    if (!AssertOneDimensionalArray(ArrayFrequencyTestOne, ArraySetOne))
        FAIL_EXIT;
}

void TestPhaseTwo_GetFrequencyOneDimensionalArray() {

    OneDimensionalArrayType ArrayFrequencyTestTwo, ArraySetTwo;

    DataSetTwo(&ArraySetTwo);
    ArrayFrequencyTestTwo.Length = ArraySetTwo.Length;

    SetupArray(&ArrayFrequencyTestTwo);

    GetFrequencyOneDimensionalArray(&ArrayFrequencyTestTwo, 1223440);

    if (!AssertOneDimensionalArray(ArrayFrequencyTestTwo, ArraySetTwo))
        FAIL_EXIT;
}

void Test_GetFrequencyOneDimensionalArray_() {

    TestPhaseOne_GetFrequencyOneDimensionalArray();
    TestPhaseTwo_GetFrequencyOneDimensionalArray();
}

void Test_GetSumOfOddDigitsOnce_() {

    OneDimensionalArrayType ArraySetOne, ArraySetTwo;

    DataSetOne(&ArraySetOne);

    assert(GetSumOfOddDigitsOnce(ArraySetOne) == 16);

    DataSetTwo(&ArraySetTwo);

    assert(GetSumOfOddDigitsOnce(ArraySetTwo) == 4);
}

#endif //SUMOFODDDIGITS_TESTINGIMPLEMENTATION_H
