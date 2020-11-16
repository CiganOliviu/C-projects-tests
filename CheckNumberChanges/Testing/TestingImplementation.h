//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_GetNumberOfDigits_() {

    assert(GetNumberOfDigits(1234) == 4);
    assert(GetNumberOfDigits(321) == 3);
    assert(GetNumberOfDigits(1) == 1);
    assert(GetNumberOfDigits(93) == 2);
}

void Test_ReverseNumber_() {

    assert(ReverseNumber(13) == 31);
    assert(ReverseNumber(80) == 8);
    assert(ReverseNumber(1234) == 4321);
}

void Test_DuplicateSpecificDigitInNumber_() {

    assert(DuplicateSpecificDigitInNumber(1234, 2) == 12234);
    assert(DuplicateSpecificDigitInNumber(3432, 3) == 334332);
    assert(DuplicateSpecificDigitInNumber(123, 4) == 123);
    assert(DuplicateSpecificDigitInNumber(2, 2) == 22);
}

void Test_GetChangesOfNumber_()  {

    assert(GetChangesOfNumber(1234, 2) == 1);
    assert(GetChangesOfNumber(1434, 4) == 2);
    assert(GetChangesOfNumber(33, 3) == 2);
}

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
