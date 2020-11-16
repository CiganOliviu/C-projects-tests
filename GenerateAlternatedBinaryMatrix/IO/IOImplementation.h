//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H

#include "IODef.h"

void OutputMatrix(struct MatrixType Array) {

    ValidateNumber(Array.Length);

    for (int iterator = 0; iterator < Array.Length; iterator++) {
        for (int jiterator = 0; jiterator < Array.Length; jiterator++)
            printf("%d ", Array.Matrix[iterator][jiterator]);

        printf("\n");
    }
}

#endif //PROBLEMSOLVINGARHITECTURE_IOIMPLEMENTATION_H
