//
// Created by cigan on 03.10.2020.
//

#ifndef NUMBERPROPERTIES_NUMBERPROPERTIESUNITTESTS_H
#define NUMBERPROPERTIES_NUMBERPROPERTIESUNITTESTS_H

#ifndef SUCCESS_CODE
#define SUCCESS_CODE 1
#endif

#ifndef FAIL_CODE
#define FAIL_CODE 0
#endif

#include "NumberPropertiesImplementation.h"

int TestFactorialFunction(int Example, int ExpectedResult) {

    if (GetFactorialValue(Example) == ExpectedResult)
        return 1;

    return 0;
}

int TestFibonacciFunction(int Example, int ExpectedResult) {

    if (GetFibonacciValue(Example) == ExpectedResult)
        return 1;

    return 0;
}

int VerifyFactorialFunction() {

    unsigned int ConclusionResult = FAIL_CODE;

    if (TestFactorialFunction(3, 6))
        ConclusionResult = SUCCESS_CODE;
    else
        ConclusionResult = FAIL_CODE;

    if (TestFactorialFunction(5, 120))
        ConclusionResult = SUCCESS_CODE;
    else
        ConclusionResult = FAIL_CODE;

    return ConclusionResult;
}

int VerifyFibonacciFunction() {

    unsigned int ConclusionResult = FAIL_CODE;

    if (TestFibonacciFunction(3, 2))
        ConclusionResult = SUCCESS_CODE;
    else
        ConclusionResult = FAIL_CODE;

    if (TestFibonacciFunction(12, 144))
        ConclusionResult = SUCCESS_CODE;
    else
        ConclusionResult = FAIL_CODE;

    return ConclusionResult;
}

#endif //NUMBERPROPERTIES_NUMBERPROPERTIESUNITTESTS_H
