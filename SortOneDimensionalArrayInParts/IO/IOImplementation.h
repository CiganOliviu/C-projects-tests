//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H

#include "IODef.h"

void OutputOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateOneDimensionalArray(Array.Length);

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%d ", Array.OneDimensionalArray[iterator]);
}

#endif //PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H
