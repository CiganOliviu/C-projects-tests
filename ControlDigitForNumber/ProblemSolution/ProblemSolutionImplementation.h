//
// Created by cigan on 14.10.2020.
//

#ifndef CONTROLDIGITFORNUMBER_PROBLEMSOLUTIONIMPLEMENTATION_H
#define CONTROLDIGITFORNUMBER_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetLastDigit(int Number) {

    int Digit;

    Digit = Number % 10;

    return Digit;
}

int GetSumOfDigitsForNumber(int Number) {

    int Sum;

    Sum = 0;

    ValidateNumber(Number);

    while (Number != 0) {

        Sum += GetLastDigit(Number);

        Number /= 10;
    }

    return Sum;
}

int GetControlDigitForNumber(int Number) {

    int ControlDigit = GetSumOfDigitsForNumber(Number);

    ValidateNumber(Number);

    while (ControlDigit > 9)
        ControlDigit = GetSumOfDigitsForNumber(ControlDigit);

    return ControlDigit;
}

#endif //CONTROLDIGITFORNUMBER_PROBLEMSOLUTIONIMPLEMENTATION_H
