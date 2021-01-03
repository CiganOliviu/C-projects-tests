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
    int * OneDimensionalArray;

} OneDimensionalArrayType;

void ValidateFile(FILE * filePointer) {

    if (filePointer == NULL) EXIT_FAILURE;
}

int * AllocMemory(unsigned int memorySize) {

    int * result = (int *) malloc(memorySize * sizeof(int));

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
        fscanf(filePointer, "%d", Array.OneDimensionalArray + it);
    
    return Array;
}

void OutputDataContainer(OneDimensionalArrayType Array) {

    for (size_t it = 0; it < Array.length; it++)
        printf("%d ", Array.OneDimensionalArray[it]);
    
    NEWLINE;
}

void OutputDataContainerInFile(const char * fileName, OneDimensionalArrayType Array) {

    FILE * filePointer = fopen(fileName, "w");

    ValidateFile(filePointer);

    for (size_t it = 0; it < Array.length; it++)
        fprintf(filePointer, "%d ", Array.OneDimensionalArray[it]);
}

void GetSymetricDataFromDataContainer(OneDimensionalArrayType Array) {

    for (size_t it = 0; it < Array.length; it++)
        for (size_t jt = it + 1; jt < Array.length; jt++)
            if (Array.OneDimensionalArray[it] == -Array.OneDimensionalArray[jt])
                printf("%d ", Array.OneDimensionalArray[it]);
}

int main() {

    OneDimensionalArrayType DataContainer = ReadDataFromFile("data.in");
    OutputDataContainer(DataContainer);

    GetSymetricDataFromDataContainer(DataContainer);
    NEWLINE;

    return 0;
}