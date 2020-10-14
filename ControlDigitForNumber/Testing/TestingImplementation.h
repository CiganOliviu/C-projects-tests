//
// Created by cigan on 14.10.2020.
//

#ifndef CONTROLDIGITFORNUMBER_TESTINGIMPLEMENTATION_H
#define CONTROLDIGITFORNUMBER_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_GetSumOfDigitsForNumber_() {

    assert(GetSumOfDigitsForNumber(1234) == 10);
    assert(GetSumOfDigitsForNumber(5678) == 26);
    assert(GetSumOfDigitsForNumber(12) == 3);
    assert(GetSumOfDigitsForNumber(8) == 8);
}

void Test_GetControlDigitForNumber_() {

    assert(GetControlDigitForNumber(1234) == 1);
    assert(GetControlDigitForNumber(5678) == 8);
    assert(GetControlDigitForNumber(987) == 6);
}

#endif //CONTROLDIGITFORNUMBER_TESTINGIMPLEMENTATION_H
