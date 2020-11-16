//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_PROBLEMSOLUTIONIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsPrime(int Number) {

    ValidatePossiblePrimeValue(Number);

    for (int Divisor = 2; Divisor <= Number / 2; Divisor++)
        if (Number % Divisor == 0)
            return FAIL_CODE;

    return SUCCESS_CODE;
}

int GetPrimeNumber(int FactorOfMultiplication) {

    ValidateValue(FactorOfMultiplication);

    int Iterator, Result;

    Iterator = 2;

    while (FactorOfMultiplication > 0) {

        if (IsPrime(Iterator)) {

            FactorOfMultiplication -= 1;
            Result = Iterator;
        }

        Iterator += 1;
    }

    return Result;
}

void GenerateOneDimensionalArray(OneDimensionalArrayType * Array) {

    ValidateValue(Array->Length);

    for (int iterator = 0; iterator < Array->Length; iterator++)
        Array->OneDimensionalArray[iterator] = GetPrimeNumber(iterator + 1);
}

#endif //ARRAYPRIMENUMBERSGENERATOR_PROBLEMSOLUTIONIMPLEMENTATION_H
