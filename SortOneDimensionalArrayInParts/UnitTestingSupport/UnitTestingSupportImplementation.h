//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_UNITTESTINGSUPPORTIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_UNITTESTINGSUPPORTIMPLEMENTATION_H

#include "UnitTestingSupportDef.h"

int AssertOneDimensionalArray(OneDimensionalArrayType ArrayOne, OneDimensionalArrayType ArrayTwo) {

    assert(ArrayOne.Length == ArrayTwo.Length);

    int StandardLength = ArrayOne.Length;

    for (int iterator = 0; iterator < StandardLength; iterator++)
        if (ArrayOne.OneDimensionalArray[iterator] != ArrayTwo.OneDimensionalArray[iterator])
            return FAIL_CODE;

    return SUCCESS_CODE;
}

#endif //PROBLEMSOLVINGARHITECTURE_UNITTESTINGSUPPORTIMPLEMENTATION_H
