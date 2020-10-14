//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H

#include "ValidationsDef.h"

void ValidateOneDimensionalArray(OneDimensionalArrayType Array) {

    if (Array.Length <= 0)
        FAIL_EXIT;
}

#endif //ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H
