//
// Created by cigan on 12.10.2020.
//

#ifndef SUMOFODDDIGITS_SUMOFODDDIGITSIMPLEMENTATION_H
#define SUMOFODDDIGITS_SUMOFODDDIGITSIMPLEMENTATION_H

#include <stdlib.h>
#include "SumOfOddDigitsDef.h"

int IsNumberInvalid(int Number) {

    if (Number <= 0)
        return 1;

    return 0;
}

int IsOdd(int Number) {

    if (IsNumberInvalid(Number))
        return 0;

    if (Number % 2 == 1)
        return 1;

    return 0;
}

ArrayStruct SetupArray() {

    ArrayStruct Array;

    Array.Length = STANDARD_LENGTH;
    Array.OneDimensionalArray = malloc(10 * STANDARD_LENGTH);

    return Array;
}

ArrayStruct AssignArrayToNull() {

    ArrayStruct Array;

    Array = SetupArray();

    for (int iterator = 1; iterator <= Array.Length; iterator++)
        *(Array.OneDimensionalArray + iterator) = 0;

    return Array;
}

ArrayStruct GetFrequencyOneDimensionalArray(int Number) {

    ArrayStruct Array;

    Array = AssignArrayToNull();

    int Digit;

    while (Number > 0) {

        Digit = Number % 10;

        if (IsOdd(Digit))
            *(Array.OneDimensionalArray + Digit) = 1;

        Number /= 10;
    }

    return Array;
}

int GetSumOfOddDigitsOnce(ArrayStruct Array) {

    int Sum = 0;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        if (*(Array.OneDimensionalArray + iterator) != 0)
            Sum += iterator;

    return Sum;
}

#endif //SUMOFODDDIGITS_SUMOFODDDIGITSIMPLEMENTATION_H
