//
// Created by cigan on 14.10.2020.
//

#ifndef SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H
#define SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H

#include "ValidationsDef.h"

void ValidateNumber(int Number) {

    if (Number <= 0)
        FAIL_EXIT;
}

void ValidateOneDimensionalArray(OneDimensionalArrayType Array) {

    if (Array.Length <= 0)
        FAIL_EXIT;
}

#endif //SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H
