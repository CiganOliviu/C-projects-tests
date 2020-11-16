//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H

#include "ValidationsDef.h"

void ValidateValue(int Value) {

    if (Value <= 0)
        exit(1);
}

void ValidatePossiblePrimeValue(int Value) {

    if (Value <= 1)
        exit(1);
}

#endif //ARRAYPRIMENUMBERSGENERATOR_VALIDATIONSIMPLEMENTATION_H
