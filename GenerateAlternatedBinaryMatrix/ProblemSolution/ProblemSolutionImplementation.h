//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsOdd(int Number) {

    if (Number % 2 == 0)
        return TRUE;

    return FALSE;
}

struct MatrixType GenerateMatrix(int Length) {

    struct MatrixType ResultMatrix;

    ResultMatrix.Length = Length;

    for (int iterator = 0; iterator < ResultMatrix.Length; ++iterator)
        for (int jiterator = 0; jiterator < ResultMatrix.Length; jiterator++)
            if (IsOdd(iterator + jiterator))
                ResultMatrix.Matrix[iterator][jiterator] = 1;
            else
                ResultMatrix.Matrix[iterator][jiterator] = 0;

    return ResultMatrix;
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
