//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsCurrentCharSpace(char Letter) {

    if (Letter == ' ')
        return TRUE;

    return FALSE;
}

void MakeConversion(char * Letter) {

    if ((int) Letter >= 97)
        * Letter -= 32;
}

OneDimensionalArrayType ConvertToUpper(OneDimensionalArrayType Array) {

    ValidateNumber(Array.Length);

    MakeConversion(&Array.OneDimensionalArray[0]);

    OneDimensionalArrayType ResultArray;

    ResultArray = Array;

    ResultArray.Length -= 1;

    for (int iterator = 1; iterator < ResultArray.Length; iterator++)
        if (IsCurrentCharSpace(ResultArray.OneDimensionalArray[iterator]))
            MakeConversion(&ResultArray.OneDimensionalArray[iterator + 1]);

    return ResultArray;
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
