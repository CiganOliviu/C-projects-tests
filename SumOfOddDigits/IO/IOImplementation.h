//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H

#include "IODef.h"

void OutputOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateValue(Array.Length);

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%d ", Array.OneDimensionalArray[iterator]);
}
#endif //ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H
