//
// Created by cigan on 09.10.2020.
//

#ifndef INTERCHANGEMAXWITHMININARRAY_INTERCHANGEMAXWITHMINARRAYDEF_H
#define INTERCHANGEMAXWITHMININARRAY_INTERCHANGEMAXWITHMINARRAYDEF_H

#include "ArrayStruct.h"

int InvalidArray(ArrayStruct Array);

int ReadOneDimensionalArrayLength();
void ReadOneDimensionalArray(ArrayStruct Array);
void OutputOneDimensionalArray(ArrayStruct Array);

int GetMaxValueFromOneDimensionalArray(ArrayStruct Array);
int GetMinValueFromOneDimensionalArray(ArrayStruct Array);

int FindElementInOneDimensionalArray(ArrayStruct Array, int ElementToSearch);

void SwapElements(int * ParameterOne, int * ParameterTwo);

void InterchangeMaxWithMinInArray(ArrayStruct Array);

#endif //INTERCHANGEMAXWITHMININARRAY_INTERCHANGEMAXWITHMINARRAYDEF_H
