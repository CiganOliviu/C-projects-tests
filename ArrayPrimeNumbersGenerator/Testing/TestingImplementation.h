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
}

void Test_GetPrimeNumber_() {

    assert(GetPrimeNumber(1) == 2);
    assert(GetPrimeNumber(2) == 3);
    assert(GetPrimeNumber(15) == 47);
    assert(GetPrimeNumber(23) == 83);
}

void DataSetOne(OneDimensionalArrayType * Array) {

    Array->Length = 5;

    Array->OneDimensionalArray[0] = 2;
    Array->OneDimensionalArray[1] = 3;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 7;
    Array->OneDimensionalArray[4] = 11;
}

void DataSetTwo(OneDimensionalArrayType * Array) {

    Array->Length = 10;

    Array->OneDimensionalArray[0] = 2;
    Array->OneDimensionalArray[1] = 3;
    Array->OneDimensionalArray[2] = 5;
    Array->OneDimensionalArray[3] = 7;
    Array->OneDimensionalArray[4] = 11;
    Array->OneDimensionalArray[5] = 13;
    Array->OneDimensionalArray[6] = 17;
    Array->OneDimensionalArray[7] = 19;
    Array->OneDimensionalArray[8] = 23;
    Array->OneDimensionalArray[9] = 29;
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
