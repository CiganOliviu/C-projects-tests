//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H
#define PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H

#include "../ProblemSolution/ProblemSolutionImplementation.h"
#include "../UnitTestingSupport/UnitTestingSupportImplementation.h"
#include "../IO/IOImplementation.h"

void Test_IsPrime_();

void Test_SwapElements_();

void DataSetOne(OneDimensionalArrayType * Array);
void DataSetTwo(OneDimensionalArrayType * Array);

void ExpectedSetOne_SortPrimeValuesOnlyFromArray_(OneDimensionalArrayType * Array);
void ExpectedSetTwo_SortPrimeValuesOnlyFromArray_(OneDimensionalArrayType * Array);

void ExpectedSetOne_SortArrayWithoutThePrimeValues_(OneDimensionalArrayType * Array);
void ExpectedSetTwo_SortArrayWithoutThePrimeValues_(OneDimensionalArrayType * Array);


void Test_SortPrimeValuesOnlyFromArray_();

void Test_SortArrayWithoutThePrimeValues_();

#endif //PROBLEMSOLVINGARHITECTURE_TESTINGDEF_H
