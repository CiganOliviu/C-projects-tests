#include <stdio.h>
#include <stdlib.h>
#include "MaximumSumSequenceDef.h"

int IsInvalidArray(ArrayStruct Array) {

    if (Array.Length <= 0)
        return 1;

    return 0;
}

void ReadOneDimensionalArray(ArrayStruct Array) {

    if (IsInvalidArray(Array))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        scanf("%d", &*(Array.OneDimensionalArray + iterator));
}

void OutputOneDimensionalArray(ArrayStruct Array) {

    if (IsInvalidArray(Array))
        return;

    for (int iterator = 0; iterator < Array.Length; iterator++)
        printf("%d ", *(Array.OneDimensionalArray + iterator));
}

int ValidateSum(int Sum) {

    if (Sum < 0)
        return 0;

    return Sum;
}

int GetMaxOfTwoNumbers(int NumberOne, int NumberTwo) {

    if (NumberOne > NumberTwo)
        return NumberOne;

    return NumberTwo;
}

int GetMaximumSumSequence(ArrayStruct Array) {

    int Sum, Result;
    Sum = 0;

    if (IsInvalidArray(Array))
        return 1;

    for (int iterator = 0; iterator < Array.Length; iterator++) {

        Sum += *(Array.OneDimensionalArray + iterator);

        Result = GetMaxOfTwoNumbers(Result, Sum);
        Sum = ValidateSum(Sum);
    }

    return Result;
}

int main() {

    ArrayStruct Array;
    Array.OneDimensionalArray = malloc(100);

    scanf("%d", &Array.Length);

    ReadOneDimensionalArray(Array);
    OutputOneDimensionalArray(Array);

    printf("%d\n", GetMaximumSumSequence(Array));

    return 0;
}
