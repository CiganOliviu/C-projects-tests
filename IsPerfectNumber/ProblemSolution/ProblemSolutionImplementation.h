//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetSumOfDivisors(unsigned int Number) {

    int ResultSum = 0;

    for (int iterator = 1; iterator <= Number / 2; iterator++)
        if (Number % iterator == 0)
            ResultSum += iterator;

    return ResultSum;
}

int IsNumberPerfect(unsigned int Number) {

    if (GetSumOfDivisors(Number) == Number)
        return TRUE;

    return FALSE;
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
