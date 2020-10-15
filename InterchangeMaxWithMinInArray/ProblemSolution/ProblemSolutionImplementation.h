//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetMinValuePositionOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateOneDimensionalArray(Array.Length);

    int MinValue, Result;

    MinValue = Array.OneDimensionalArray[0];
    Result = 0;

    for (int iterator = 0; iterator < Array.Length; iterator++)
       if (MinValue > Array.OneDimensionalArray[iterator]) {

            MinValue = Array.OneDimensionalArray[iterator];
            Result = iterator;
       }

    return Result;
}

int GetMaxValuePositionOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateOneDimensionalArray(Array.Length);

    int MaxValue, Result;

    MaxValue = Array.OneDimensionalArray[0];
    Result = 0;

    for (int iterator = 0; iterator < Array.Length; iterator++)
     if (MaxValue < Array.OneDimensionalArray[iterator]) {

         MaxValue = Array.OneDimensionalArray[iterator];
         Result = iterator;
     }

    return Result;
}

void SwapElements(int * ParameterOne, int * ParameterTwo) {

    * ParameterOne = * ParameterOne + * ParameterTwo;
    * ParameterTwo = * ParameterOne - * ParameterTwo;
    * ParameterOne = * ParameterOne - * ParameterTwo;
}

void InterchangeMaxWithMinInArray(OneDimensionalArrayType * Array) {

    int MinValuePosition = GetMinValuePositionOneDimensionalArray(*Array);
    int MaxValuePosition = GetMaxValuePositionOneDimensionalArray(*Array);

    SwapElements(&Array->OneDimensionalArray[MinValuePosition], &Array->OneDimensionalArray[MaxValuePosition]);
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
