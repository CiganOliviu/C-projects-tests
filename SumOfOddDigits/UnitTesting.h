//
// Created by cigan on 12.10.2020.
//

#ifndef SUMOFODDDIGITS_UNITTESTING_H
#define SUMOFODDDIGITS_UNITTESTING_H

#include <stdio.h>
#include "UnitTestingSupport.h"
#include "SumOfOddDigitsImplementation.h"

void Test_IsOdd_Function() {

    if (AssertIntegerPrimitiveData(IsOdd(13), 1))
        printf("\nTest Case One Passed");

    if (AssertIntegerPrimitiveData(IsOdd(0), 0))
        printf("\nTest Case Two Passed");

    if (AssertIntegerPrimitiveData(IsOdd(124), 0))
        printf("\nTest Case Three Passed");

    if (AssertIntegerPrimitiveData(IsOdd(-133), 0))
        printf("\nTest Case Four Passed");
}

void Test_GetSumOfOddDigitsOnce_Function() {

    ArrayStruct Array = GetFrequencyOneDimensionalArray(1123345);

    if (AssertIntegerPrimitiveData(GetSumOfOddDigitsOnce(Array),9))
        printf("\nTest Case Five Passed");
}

#endif //SUMOFODDDIGITS_UNITTESTING_H
