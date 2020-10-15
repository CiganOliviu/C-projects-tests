//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_UNITTESTINGSUPPORTIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_UNITTESTINGSUPPORTIMPLEMENTATION_H

#include "UnitTestingSupportDef.h"

int AssertOneDimensionalArray(OneDimensionalArrayType ArrayOne, OneDimensionalArrayType ArrayTwo) {

    assert(ArrayOne.Length == ArrayTwo.Length);

    int StandardLength = ArrayOne.Length;

    for (int iterator = 0; iterator < StandardLength; iterator++)
        if (ArrayOne.OneDimensionalArray[iterator] != ArrayTwo.OneDimensionalArray[iterator])
            return FAIL_CODE;

    return SUCCESS_CODE;
}

#endif //ARRAYPRIMENUMBERSGENERATOR_UNITTESTINGSUPPORTIMPLEMENTATION_H
