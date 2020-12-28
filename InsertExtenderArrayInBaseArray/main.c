#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef NEWLINE
#define NEWLINE printf("\n");
#endif

struct OneDimensionalArrayType {

    unsigned int length;
    int * OneDimensionalArray;

} OneDimensionalArrayType;

unsigned int ReadSpecificValue() {

    unsigned int containerForValue;

    scanf("%u", &containerForValue);
    assert(containerForValue >= 0);

    return containerForValue;
}

struct OneDimensionalArrayType SetDefaultValuesForArray(unsigned int length) {

    struct OneDimensionalArrayType Array;

    Array.length = length;
    Array.OneDimensionalArray = (int *) malloc(length * sizeof(int));

    return Array;
}

struct OneDimensionalArrayType ReadOneDimensionalArray(unsigned int length) {

    struct OneDimensionalArrayType Array = SetDefaultValuesForArray(length);

    for (int it = 1; it <= Array.length; it++)
        scanf("%d", Array.OneDimensionalArray + it);

    return Array;
}

void OutputOneDimensionalArray(struct OneDimensionalArrayType Array) {

    for (int it = 1; it <= Array.length; it++)
        printf("%d ", *(Array.OneDimensionalArray + it));

    NEWLINE;
}

struct OneDimensionalArrayType InsertValueInArray(struct OneDimensionalArrayType Array, int Value, unsigned int Position) {

    struct OneDimensionalArrayType Result = Array;

    for (int it = Result.length; it >= Position; it--)
        Result.OneDimensionalArray[it + 1] = Result.OneDimensionalArray[it];
    
    Result.length += 1;

    Result.OneDimensionalArray[Position] = Value;

    return Result;
}

struct OneDimensionalArrayType InsertExtenderArrayInBaseArray(struct OneDimensionalArrayType BaseArray, struct OneDimensionalArrayType ExtenderArray, unsigned int Position) {

    struct OneDimensionalArrayType Result = BaseArray;

    for (int it = 1; it <= ExtenderArray.length; it++)
        Result = InsertValueInArray(Result, ExtenderArray.OneDimensionalArray[it], Position + it); 

    return Result;
}

int main() {

    unsigned int BaseOneDimensionalArrayLength = ReadSpecificValue();
    struct OneDimensionalArrayType BaseArray = ReadOneDimensionalArray(BaseOneDimensionalArrayLength);

    unsigned int ExtenderOneDimensionalArrayLength = ReadSpecificValue();
    struct OneDimensionalArrayType ExtenderArray = ReadOneDimensionalArray(ExtenderOneDimensionalArrayLength);

    unsigned int Position = ReadSpecificValue();
    
    struct OneDimensionalArrayType ResultArray = InsertExtenderArrayInBaseArray(BaseArray, ExtenderArray, Position);

    OutputOneDimensionalArray(ResultArray);

    return 0;
}