//
// Created by cigan on 14.10.2020.
//

#ifndef ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H
#define ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H

#include "IODef.h"

void ReadOneDimensionalArray(OneDimensionalArrayType * Array) {

    for (int iterator = 0; iterator < Array->Length; iterator++)
        scanf("%c", &Array->OneDimensionalArray[iterator]);
}

void OutputOneDimensionalArray(OneDimensionalArrayType Array) {

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%c", Array.OneDimensionalArray[iterator]);
}

#endif //ARRAYPRIMENUMBERSGENERATOR_IOIMPLEMENTATION_H
