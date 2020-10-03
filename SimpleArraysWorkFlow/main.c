#include <stdio.h>
#include <stdlib.h>

#include "ArraysWorkFlow.h"

void ReadOneDimensionalArray(OneDimensionalArrayStruct Array) {

    for (int iterator = 0; iterator < Array.ArrayLength; iterator++)
        scanf("%d", &*(Array.OneDimensionalArray + iterator));
}

void PutsOneDimensionalArray(OneDimensionalArrayStruct Array) {

    for (int iterator = 0; iterator < Array.ArrayLength; iterator++)
        printf("%d ", *(Array.OneDimensionalArray + iterator));
}

void SwapElements(int * ElementOne, int * ElementTwo) {

    * ElementOne = * ElementOne + * ElementTwo;
    * ElementTwo = * ElementOne - * ElementTwo;
    * ElementOne = * ElementOne - * ElementTwo;
}

void SetBubbleSort(OneDimensionalArrayStruct Array) {

    for (int iterator = 0; iterator < Array.ArrayLength - 1; iterator++)
        for (int jiterator = iterator + 1; jiterator < Array.ArrayLength; jiterator++)
            if (*(Array.OneDimensionalArray + iterator) > *(Array.OneDimensionalArray + jiterator))
                SwapElements(&*(Array.OneDimensionalArray + iterator), &*(Array.OneDimensionalArray + jiterator));
}

int main() {

    OneDimensionalArrayStruct OneDimensionalArray;

    OneDimensionalArray.OneDimensionalArray = malloc(STANDARD_LENGTH);
    OneDimensionalArray.ArrayLength = STANDARD_LENGTH;

    ReadOneDimensionalArray(OneDimensionalArray);
    PutsOneDimensionalArray(OneDimensionalArray);

    SetBubbleSort(OneDimensionalArray);

    PutsOneDimensionalArray(OneDimensionalArray);

    return 0;
}
