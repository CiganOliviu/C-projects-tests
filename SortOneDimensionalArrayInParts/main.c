#include "SortArrayInPartsImplementation.h"

int main() {

    ArrayStruct ArrayForPrimeValues = SetupArray(STANDARD_LENGTH);
    ArrayStruct ArrayForNonPrimeValues = SetupArray(STANDARD_LENGTH);

    ReadOneDimensionalArray(ArrayForPrimeValues);

    SortPrimeValuesOnlyFromArray(ArrayForPrimeValues);

    OutputOneDimensionalArray(ArrayForPrimeValues);

    printf("\n");

    ReadOneDimensionalArray(ArrayForNonPrimeValues);

    SortArrayWithoutThePrimeValues(ArrayForNonPrimeValues);

    OutputOneDimensionalArray(ArrayForNonPrimeValues);

    return 0;
}
