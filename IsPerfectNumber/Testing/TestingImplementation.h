//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_GetSumOfDivisors_() {

    assert(GetSumOfDivisors(12) == 16);
    assert(GetSumOfDivisors(6) == 6);
    assert(GetSumOfDivisors(4) == 3);
}

void Test_IsNumberPerfect_() {

    assert(IsNumberPerfect(6) == TRUE);
    assert(IsNumberPerfect(28) == TRUE);
    assert(IsNumberPerfect(97) == FALSE);
}

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGIMPLEMENTATION_H
