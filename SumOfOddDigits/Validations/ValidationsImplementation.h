//
// Created by cigan on 14.10.2020.
//

#ifndef SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H
#define SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H

#include "ValidationsDef.h"

void ValidateValue(int Value) {

    if (Value <= 0)
        exit(1);
}

void ValidateOddValue(int Value) {

    if (Value < 0)
        exit(1);
}

#endif //SUMOFODDDIGITS_VALIDATIONSIMPLEMENTATION_H
