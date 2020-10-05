//
// Created by cigan on 03.10.2020.
//

#include "NumberProperties.h"

#ifndef NUMBERPROPERTIES_NUMBERPROPERTIESIMPLEMENTATION_H
#define NUMBERPROPERTIES_NUMBERPROPERTIESIMPLEMENTATION_H

int ValidateFactorialValue(int IndexOfNumber) {

    if (IndexOfNumber == 0)
        return 0;

    if (IndexOfNumber == 1)
        return 0;

    return 1;
}

int GetFactorialValue(int IndexOfNumber) {

    if (ValidateFactorialValue(IndexOfNumber))
        return 0;

    return IndexOfNumber * GetFactorialValue(IndexOfNumber - 1);
}

int ValidateFibonacciValue(int IndexOfNumber) {

    if (IndexOfNumber == 1)
        return 0;

    if (IndexOfNumber == 2)
        return 0;

    return 1;
}

int GetFibonacciValue(int IndexOfNumber) {

    if (ValidateFibonacciValue(IndexOfNumber))
        return 0;

    return GetFibonacciValue(IndexOfNumber - 1) + GetFibonacciValue(IndexOfNumber - 2);
}

#endif //NUMBERPROPERTIES_NUMBERPROPERTIESIMPLEMENTATION_H

