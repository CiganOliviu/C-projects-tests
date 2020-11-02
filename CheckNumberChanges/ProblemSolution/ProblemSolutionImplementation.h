//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetNumberOfDigits(unsigned int Number) {

    int CounterResult = 0;

    while (Number > 0) {

        CounterResult += 1;

        Number /= 10;
    }

    return CounterResult;
}

int ReverseNumber(unsigned int Number) {

    int ReversedNumber;
    int Digit;

    ReversedNumber = 0;

    while (Number != 0) {

        Digit = Number % 10;
        ReversedNumber = ReversedNumber * 10 + Digit;
        Number /= 10;
    }

    return ReversedNumber;
}

int DuplicateSpecificDigitInNumber(unsigned int Number, unsigned int Digit) {

    Number = ReverseNumber(Number);

    int DuplicatedNumber;
    int NumberDigit;

    DuplicatedNumber = 0;

    while (Number > 0) {

        NumberDigit = Number % 10;

        DuplicatedNumber = DuplicatedNumber * 10 + NumberDigit;

        if (NumberDigit == Digit)
            DuplicatedNumber = DuplicatedNumber * 10 + NumberDigit;

        Number /= 10;
    }

    return DuplicatedNumber;
}

int GetChangesOfNumber(unsigned int Number, unsigned  int Digit) {

    int DuplicatedNumber;

    DuplicatedNumber = DuplicateSpecificDigitInNumber(Number, Digit);

    int Result;

    Result = GetNumberOfDigits(DuplicatedNumber) - GetNumberOfDigits(Number);

    return Result;
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
