//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H

#include "../ProblemSolution/ProblemSolutionImplementation.h"
#include "../UnitTestingSupport/UnitTestingSupportImplementation.h"

void DataSetOne(OneDimensionalArrayType * Array);
void DataSetTwo(OneDimensionalArrayType * Array);

void ExpectedSetOne(OneDimensionalArrayType * Array);
void ExpectedSetTwo(OneDimensionalArrayType * Array);

void Test_GetMinValuePositionOneDimensionalArray_();
void Test_GetMaxValuePositionOneDimensionalArray_();

void Test_SwapElements_();

void Test_InterchangeMaxWithMinInArray_();

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H
