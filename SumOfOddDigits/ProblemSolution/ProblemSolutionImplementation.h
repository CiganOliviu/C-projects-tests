//
// Created by cigan on 14.10.2020.
//

#ifndef SUMOFODDDIGITS_PROBLEMSOLUTIONIMPLEMENTATION_H
#define SUMOFODDDIGITS_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsOdd(int Number) {

    if (Number % 2 == 1)
        return SUCCESS_CODE;

    return FAIL_CODE;
}

void SetupArray(OneDimensionalArrayType * Array) {

    ValidateOneDimensionalArray(*Array);

    for (int iterator = 0; iterator < Array->Length; iterator++)
        Array->OneDimensionalArray[iterator] = 0;
}

void GetFrequencyOneDimensionalArray(OneDimensionalArrayType * Array, int Number) {

    int Digit;

    Array->Length = 9;

    while (Number > 0) {

        Digit = Number % 10;

        if (IsOdd(Digit))
            Array->OneDimensionalArray[Digit] = 1;

        Number /= 10;
    }
}

int GetSumOfOddDigitsOnce(OneDimensionalArrayType Array) {

    int Sum = 0;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        if (Array.OneDimensionalArray[iterator] != 0)
            Sum += iterator;

    return Sum;
}

#endif //SUMOFODDDIGITS_PROBLEMSOLUTIONIMPLEMENTATION_H
