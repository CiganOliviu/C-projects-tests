//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsPrime(int Number) {

    ValidateValue(Number);

    if (Number == 2)
        return SUCCESS_CODE;

    for (int divisor = 2; divisor <= Number / 2; divisor++)
        if (Number % divisor == 0)
            return FAIL_CODE;

    return SUCCESS_CODE;
}

void SwapElements(int * ParameterOne, int * ParameterTwo) {

    * ParameterOne = * ParameterOne + * ParameterTwo;
    * ParameterTwo = * ParameterOne - * ParameterTwo;
    * ParameterOne = * ParameterOne - * ParameterTwo;
}

void SortPrimeValuesOnlyFromArray(OneDimensionalArrayType * Array) {

   ValidateValue(Array->Length);

    for (int iterator = 0; iterator < Array->Length; ++iterator)
        for (int jiterator = 0; jiterator < Array->Length; jiterator++)
            if (IsPrime(Array->OneDimensionalArray[iterator]) && IsPrime(Array->OneDimensionalArray[jiterator]))
                if (Array->OneDimensionalArray[iterator] < Array->OneDimensionalArray[jiterator])
                    SwapElements(&Array->OneDimensionalArray[iterator], &Array->OneDimensionalArray[jiterator]);
}

void SortArrayWithoutThePrimeValues(OneDimensionalArrayType * Array) {

    ValidateValue(Array->Length);

    for (int iterator = 0; iterator < Array->Length; ++iterator)
        for (int jiterator = 0; jiterator < Array->Length; jiterator++)
            if (!IsPrime(Array->OneDimensionalArray[iterator]) && !IsPrime(Array->OneDimensionalArray[jiterator]))
                if (Array->OneDimensionalArray[iterator] < Array->OneDimensionalArray[jiterator])
                    SwapElements(&Array->OneDimensionalArray[iterator], &Array->OneDimensionalArray[jiterator]);
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
