//
// Created by cigan on 14.10.2020.
//

#ifndef SUMOFODDDIGITS_TESTINGDEF_H
#define SUMOFODDDIGITS_TESTINGDEF_H

#include "../ProblemSolution/ProblemSolutionImplementation.h"
#include "../UnitTestingSupport/UnitTestingSupportImplementation.h"
#include "../IO/IOImplementation.h"

void Test_IsOdd_();

void SetupDataSet(OneDimensionalArrayType * Array);
void Test_SetupArray_();

void DataSetOne(OneDimensionalArrayType * Array);
void DataSetTwo(OneDimensionalArrayType * Array);

void TestPhaseOne_GetFrequencyOneDimensionalArray();
void TestPhaseTwo_GetFrequencyOneDimensionalArray();

void Test_GetFrequencyOneDimensionalArray_();

void Test_GetSumOfOddDigitsOnce_();

#endif //SUMOFODDDIGITS_TESTINGDEF_H
