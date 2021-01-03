#include <stdio.h>
#include <stdlib.h>

#ifndef NEWLINE
#define NEWLINE printf("\n");
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif


typedef struct OneDimensionalArrayType {

    unsigned int length;
    float * OneDimensionalArray;

} OneDimensionalArrayType;

void ValidateFile(FILE * filePointer) {

    if (filePointer == NULL) EXIT_FAILURE;
}

float * AllocMemory(unsigned int memorySize) {

    float * result = (float *) malloc(memorySize * sizeof(float));

    return result;
}

OneDimensionalArrayType SetupOneDimensionalArrayType(unsigned int lengthOfArray) {

    OneDimensionalArrayType result;
    result.length = lengthOfArray;
    result.OneDimensionalArray = AllocMemory(lengthOfArray); 

    return result;
}

OneDimensionalArrayType ReadDataFromFile(const char * fileName) {

    FILE * filePointer = fopen(fileName, "r");

    ValidateFile(filePointer);

    unsigned int lengthOfArray;

    fscanf(filePointer, "%u", &lengthOfArray);

    OneDimensionalArrayType Array = SetupOneDimensionalArrayType(lengthOfArray);

    for (size_t it = 0; it < lengthOfArray; it++)
        fscanf(filePointer, "%f", Array.OneDimensionalArray + it);
    
    return Array;
}

void OutputDataContainer(OneDimensionalArrayType Array) {

    for (size_t it = 0; it < Array.length; it++)
        printf("%f ", Array.OneDimensionalArray[it]);
    
    NEWLINE;
}

void OutputDataContainerInFile(const char * fileName, OneDimensionalArrayType Array) {

    FILE * filePointer = fopen(fileName, "w");

    ValidateFile(filePointer);

    for (size_t it = 0; it < Array.length; it++)
        fprintf(filePointer, "%lf ", Array.OneDimensionalArray[it]);
}

int IsValueInArrayDuplicated(OneDimensionalArrayType Data, float value, int startPosition) {

    unsigned int contor = 0;

    for (size_t it = startPosition; it < Data.length; it++)
        if (value == Data.OneDimensionalArray[it])
            return TRUE;

    return FALSE;
}

int CheckIfValueExists(OneDimensionalArrayType Data, float value) {

    for (size_t it = 0; it < Data.length; it++)
        if (value == Data.OneDimensionalArray[it])
            return TRUE;

    return FALSE;
}

OneDimensionalArrayType SaveDuplicatedDataIntoContainer(OneDimensionalArrayType DataContainer) {

    OneDimensionalArrayType Result;
    Result.OneDimensionalArray = (float *) malloc(sizeof(float));

    int index = 0;

    for (size_t it = 0; it < DataContainer.length; it++)
        if (IsValueInArrayDuplicated(DataContainer, DataContainer.OneDimensionalArray[it], it + 1))
            if (CheckIfValueExists(Result, DataContainer.OneDimensionalArray[it]) == FALSE) {
                
                Result.OneDimensionalArray[index] = DataContainer.OneDimensionalArray[it];
                index += 1;
                Result.length = index;
            }

    return Result;
}

int main() {

    OneDimensionalArrayType DataContainer = ReadDataFromFile("data.in");
    OutputDataContainer(DataContainer);

    OneDimensionalArrayType DuplicatedDataContainer = SaveDuplicatedDataIntoContainer(DataContainer);
    OutputDataContainer(DuplicatedDataContainer);

    OutputDataContainerInFile("data.out", DuplicatedDataContainer);

    return 0;
}