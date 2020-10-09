#include <stdio.h>
#include <stdlib.h>
#include "InterchangeMaxWithMinArrayDef.h"

#ifndef NEWLINE
#define NEWLINE printf("\n");
#endif

int InvalidArray(ArrayStruct Array) {

    if (Array.Length <= 0)
        return 1;

    return 0;
}

int ReadOneDimensionalArrayLength() {

    int Length;

    scanf("%d", &Length);

    return Length;
}

void ReadOneDimensionalArray(ArrayStruct Array) {

    if (InvalidArray(Array))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        scanf("%d", &*(Array.OneDimensionalArray + iterator));
}

void OutputOneDimensionalArray(ArrayStruct Array) {

    if (InvalidArray(Array))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%d ", *(Array.OneDimensionalArray + iterator));
}

int GetMaxValueFromOneDimensionalArray(ArrayStruct Array) {

    if (InvalidArray(Array))
        return 0;

    int MaxValue = *(Array.OneDimensionalArray + 0);

    for (int iterator = 1; iterator < Array.Length; iterator++)
        if (MaxValue < *(Array.OneDimensionalArray + iterator))
            MaxValue = *(Array.OneDimensionalArray + iterator);

    return MaxValue;
}

int GetMinValueFromOneDimensionalArray(ArrayStruct Array) {

    if (InvalidArray(Array))
        return 0;

    int MinValue = *(Array.OneDimensionalArray + 0);

    for (int iterator = 1; iterator < Array.Length; iterator++)
        if (MinValue > *(Array.OneDimensionalArray + iterator))
            MinValue = *(Array.OneDimensionalArray + iterator);

    return MinValue;
}

int FindElementInOneDimensionalArray(ArrayStruct Array, int ElementToSearch) {

    if (InvalidArray(Array))
        return 0;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        if (ElementToSearch == *(Array.OneDimensionalArray + iterator))
            return iterator;

    return 0;
}

void SwapElements(int * ParameterOne, int * ParameterTwo) {

    * ParameterOne = * ParameterOne + * ParameterTwo;
    * ParameterTwo = * ParameterOne - * ParameterTwo;
    * ParameterOne = * ParameterOne - * ParameterTwo;
}

void InterchangeMaxWithMinInArray(ArrayStruct Array) {

    int MinValue, MaxValue, PositionOfMinValue, PositionOfMaxValue;

    MinValue = GetMinValueFromOneDimensionalArray(Array);
    MaxValue = GetMaxValueFromOneDimensionalArray(Array);

    PositionOfMinValue = FindElementInOneDimensionalArray(Array, MinValue);
    PositionOfMaxValue = FindElementInOneDimensionalArray(Array, MaxValue);

    SwapElements( &*(Array.OneDimensionalArray + PositionOfMinValue), &*(Array.OneDimensionalArray + PositionOfMaxValue) );
}

int main() {

    ArrayStruct Array;
    Array.OneDimensionalArray = malloc(100);
    Array.Length = ReadOneDimensionalArrayLength();

    ReadOneDimensionalArray(Array);
    OutputOneDimensionalArray(Array);

    InterchangeMaxWithMinInArray(Array);

    NEWLINE

    OutputOneDimensionalArray(Array);

    return 0;
}
