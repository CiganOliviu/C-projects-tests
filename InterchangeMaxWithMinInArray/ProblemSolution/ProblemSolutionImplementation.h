//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int GetMinValueFromOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateValue(Array.Length);

    int MinValue;

    MinValue = Array.OneDimensionalArray[0];

    for (int iterator = 0; iterator < Array.Length; ++iterator)
        if (MinValue > Array.OneDimensionalArray[iterator])
            MinValue = Array.OneDimensionalArray[iterator];

    return MinValue;
}

int GetMinValuePositionOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateValue(Array.Length);

    int MinValue;

    MinValue = GetMinValueFromOneDimensionalArray(Array);

    for (int iterator = 0; iterator < Array.Length; iterator++)
       if (MinValue == Array.OneDimensionalArray[iterator])
           return iterator;

   return -1;
}

int GetMaxValueFromOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateValue(Array.Length);

    int MaxValue;

    MaxValue = Array.OneDimensionalArray[0];

    for (int iterator = 0; iterator < Array.Length; ++iterator)
        if (MaxValue < Array.OneDimensionalArray[iterator])
            MaxValue = Array.OneDimensionalArray[iterator];

    return MaxValue;
}

int GetMaxValuePositionOneDimensionalArray(OneDimensionalArrayType Array) {

    ValidateValue(Array.Length);

    int MaxValue;

    MaxValue = GetMaxValueFromOneDimensionalArray(Array);

    for (int iterator = 0; iterator < Array.Length; iterator++)
        if (MaxValue == Array.OneDimensionalArray[iterator])
            return iterator;

    return -1;
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
