#include "IO/IOImplementation.h"
#include "ProblemSolution/ProblemSolutionImplementation.h"

int main() {

    OneDimensionalArrayType Array;

    Array.Length = 15;

    ReadOneDimensionalArray(&Array);

    OutputOneDimensionalArray(ConvertToUpper(Array));

    return 0;
}
