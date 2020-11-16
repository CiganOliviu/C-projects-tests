//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_TESTINGIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_TESTINGIMPLEMENTATION_H

#include "TestingDef.h"

void Test_IsPrime_() {

    assert(IsPrime(13) == SUCCESS_CODE);
    assert(IsPrime(26) == FAIL_CODE);
    assert(IsPrime(97) == SUCCESS_CODE);
    assert(IsPrime(2) == SUCCESS_CODE);
}

void Test_GetPrimeNumber_() {

    assert(GetPrimeNumber(1) == 2);
    assert(GetPrimeNumber(2) == 3);
    assert(GetPrimeNumber(15) == 47);
    assert(GetPrimeNumber(23) == 83);
}

void Test_GenerateOneDimensionalArray_() {

    OneDimensionalArrayType DataSetArrayOne, DataSetArrayTwo, ArraySetOne, ArraySetTwo;

    DataSetOne(&DataSetArrayOne);
    ArraySetOne.Length = DataSetArrayOne.Length;

    GenerateOneDimensionalArray(&ArraySetOne);

    DataSetTwo(&DataSetArrayTwo);
    ArraySetTwo.Length = DataSetArrayTwo.Length;

    GenerateOneDimensionalArray(&ArraySetTwo);

    if (!AssertOneDimensionalArray(ArraySetOne, DataSetArrayOne))
        FAIL_EXIT;

    if (!AssertOneDimensionalArray(ArraySetTwo, DataSetArrayTwo))
        FAIL_EXIT;
}

#endif //ARRAYPRIMENUMBERSGENERATOR_TESTINGIMPLEMENTATION_H
