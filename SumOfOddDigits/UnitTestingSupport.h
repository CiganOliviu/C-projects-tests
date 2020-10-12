//
// Created by cigan on 12.10.2020.
//

#ifndef SUMOFODDDIGITS_UNITTESTINGSUPPORT_H
#define SUMOFODDDIGITS_UNITTESTINGSUPPORT_H

#include "ArrayStruct.h"

int AssertIntegerPrimitiveData(int NumberToCompare, int ForComparingNumber) {

    if (NumberToCompare == ForComparingNumber)
        return 1;

    return 0;

}

int AreLengthsInvalid(int LengthOfArrayToCompare, int LengthOfForComparingArray) {

    if (LengthOfArrayToCompare == LengthOfForComparingArray)
        return 0;

    return 1;
}

int AreArraysInvalid(ArrayStruct ArrayToCompare, ArrayStruct ForComparingArray) {

    int GeneralLength = ArrayToCompare.Length;

    for (int iterator = 0; iterator < GeneralLength; iterator++)
        if (*(ArrayToCompare.OneDimensionalArray + iterator) == *(ForComparingArray.OneDimensionalArray + iterator))
            return 0;

    return 1;
}

int AssertOneDimensionalArrays(ArrayStruct ArrayToCompare, ArrayStruct ForComparingArray) {

    if (AreLengthsInvalid(ArrayToCompare.Length, ForComparingArray.Length))
        return 0;

    if (AreArraysInvalid(ArrayToCompare, ForComparingArray))
        return 0;

    return 1;
}

#endif //SUMOFODDDIGITS_UNITTESTINGSUPPORT_H
