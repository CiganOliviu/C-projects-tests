//
// Created by cigan on 12.10.2020.
//

#ifndef SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSIMPLEMENTATION_H
#define SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSIMPLEMENTATION_H

#include <stdio.h>
#include <stdlib.h>

#include "SortArrayInPartsDef.h"

ArrayStruct SetupArray(int Length) {

    ArrayStruct Array;

    Array.Length = Length;
    Array.OneDimensionalArray = malloc(2 * Length);

    return Array;
}

int IsInvalidValue(int Value) {

    if (Value <= 0)
        return 1;

    return 0;
}

void ReadOneDimensionalArray(ArrayStruct Array) {

    if (IsInvalidValue(Array.Length))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        scanf("%d", &*(Array.OneDimensionalArray + iterator));
}

void OutputOneDimensionalArray(ArrayStruct Array) {

    if (IsInvalidValue(Array.Length))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%d ", *(Array.OneDimensionalArray + iterator));
}

int IsPrime(int Number) {

    if (IsInvalidValue(Number))
        return -1;

    if (Number == 2) return 1;

    for (int iterator = 2; iterator <= Number / 2; iterator++)
        if (Number % iterator == 0)
            return 0;

    return 1;
}

void SwapElementsValue(int * ElementValueOne, int * ElementValueTwo) {

    * ElementValueOne = * ElementValueOne + * ElementValueTwo;
    * ElementValueTwo = * ElementValueOne - * ElementValueTwo;
    * ElementValueOne = * ElementValueOne - * ElementValueTwo;
}

void SortPrimeValuesOnlyFromArray(ArrayStruct Array) {

    if (IsInvalidValue(Array.Length))
        return;

    for (int iterator = 0; iterator < Array.Length; ++iterator)
        for (int jiterator = 0; jiterator < Array.Length; jiterator++)
            if (IsPrime(*(Array.OneDimensionalArray + iterator)) && IsPrime(*(Array.OneDimensionalArray + jiterator)))
                if (*(Array.OneDimensionalArray + iterator) < *(Array.OneDimensionalArray + jiterator))
                    SwapElementsValue(&*(Array.OneDimensionalArray + iterator), &*(Array.OneDimensionalArray + jiterator));
}

void SortArrayWithoutThePrimeValues(ArrayStruct Array) {

    if (IsInvalidValue(Array.Length))
        return;

    for (int iterator = 0; iterator < Array.Length; ++iterator)
        for (int jiterator = 0; jiterator < Array.Length; jiterator++)
            if (!IsPrime(*(Array.OneDimensionalArray + iterator)) && !IsPrime(*(Array.OneDimensionalArray + jiterator)))
                if (*(Array.OneDimensionalArray + iterator) < *(Array.OneDimensionalArray + jiterator))
                    SwapElementsValue(&*(Array.OneDimensionalArray + iterator), &*(Array.OneDimensionalArray + jiterator));
}

#endif //SORTONEDIMENSIONALARRAYINPARTS_SORTARRAYINPARTSIMPLEMENTATION_H
