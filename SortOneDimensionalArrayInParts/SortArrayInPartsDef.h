//
// Created by cigan on 12.10.2020.
//

#ifndef SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSDEF_H
#define SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSDEF_H

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 7
#endif

#include "ArrayStruct.h"

ArrayStruct SetupArray();
int IsInvalidValue(int Value);

void ReadOneDimensionalArray(ArrayStruct Array);
void OutputOneDimensionalArray(ArrayStruct Array);

int IsPrime(int Number);
void SwapElementsValue(int * ElementValueOne, int * ElementValueTwo);

void SortPrimeValuesOnlyFromArray(ArrayStruct Array);
void SortArrayWithoutThePrimeValues(ArrayStruct Array);

#endif //SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSDEF_H
