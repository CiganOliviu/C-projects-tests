//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H

#include "../CoreDependencies/CoreDependencies.h"
#include "../Validations/ValidationsImplementation.h"
#include "../DataStructures/DataStructures.h"

int GetMinValueFromOneDimensionalArray(OneDimensionalArrayType Array);
int GetMinValuePositionOneDimensionalArray(OneDimensionalArrayType Array);

int GetMaxValueFromOneDimensionalArray(OneDimensionalArrayType Array);
int GetMaxValuePositionOneDimensionalArray(OneDimensionalArrayType Array);

void SwapElements(int * ParameterOne, int * ParameterTwo);

void InterchangeMaxWithMinInArray(OneDimensionalArrayType * Array);

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H
