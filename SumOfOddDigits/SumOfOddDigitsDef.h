//
// Created by cigan on 12.10.2020.
//

#ifndef SUMOFODDDIGITS_SUMOFODDDIGITSDEF_H
#define SUMOFODDDIGITS_SUMOFODDDIGITSDEF_H

#include "ArrayStruct.h"

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 9
#endif

int IsNumberInvalid(int Number);
int IsInvalidOneDimensionalArray(ArrayStruct Array);

int IsOdd(int Number);

ArrayStruct SetupArray();
ArrayStruct AssignArrayToNull();
ArrayStruct GetFrequencyOneDimensionalArray(int Number);
int GetSumOfOddDigitsOnce(ArrayStruct Array);

#endif //SUMOFODDDIGITS_SUMOFODDDIGITSDEF_H
