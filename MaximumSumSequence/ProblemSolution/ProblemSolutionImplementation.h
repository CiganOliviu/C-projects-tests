//
// Created by cigan on 14.10.2020.
//

#ifndef MAXIMUMSUMSEQUENCE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define MAXIMUMSUMSEQUENCE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetMaxOfTwoNumbers(int NumberOne, int NumberTwo) {

    if (NumberOne > NumberTwo)
        return NumberOne;

    return NumberTwo;
}

int VerifySum(int Sum) {

    if (Sum < 0)
        return 0;

    return Sum;
}

int GetMaximumSumSequence(OneDimensionalArrayType Array) {

    int Sum, Result;
    Sum = 0;

    ValidateOneDimensionalArray(Array);

    for (int iterator = 0; iterator < Array.Length; iterator++) {

        Sum += *(Array.OneDimensionalArray + iterator);

        Result = GetMaxOfTwoNumbers(Result, Sum);
        Sum = VerifySum(Sum);
    }

    return Result;
}

#endif //MAXIMUMSUMSEQUENCE_PROBLEMSOLUTIONIMPLEMENTATION_H
