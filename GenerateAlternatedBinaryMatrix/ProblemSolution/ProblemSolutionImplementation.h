//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H

#include "ProblemSolutionDef.h"

int IsOdd(int Number) {

    if (Number % 2 == 0)
        return TRUE;

    return FALSE;
}

int IsNotOdd(int Number) {

    if (Number % 2 == 1)
        return TRUE;

    return FALSE;
}

struct ElementsIndices SetupMatrixElementIndices(int Line, int Column) {

    struct ElementsIndices Result;

    Result.LineIndex = Line;
    Result.ColumnIndex = Column;

    return Result;
}

void AssignValueToOddMatrixElement(struct MatrixType * Array, struct ElementsIndices Indices) {

    if (IsOdd(Indices.LineIndex + Indices.ColumnIndex))
        Array->Matrix[Indices.LineIndex][Indices.ColumnIndex] = 1;
}

void AssignValueToEvenMatrixElement(struct MatrixType * Array, struct ElementsIndices Indices) {

    if (IsNotOdd(Indices.LineIndex + Indices.ColumnIndex))
        Array->Matrix[Indices.LineIndex][Indices.ColumnIndex] = 0;
}

struct MatrixType GenerateMatrix(int Length) {

    struct ElementsIndices Indices;
    struct MatrixType ResultMatrix;

    ResultMatrix.Length = Length;

    for (int iterator = 0; iterator < ResultMatrix.Length; ++iterator) {
        for (int jiterator = 0; jiterator < ResultMatrix.Length; jiterator++) {

            Indices = SetupMatrixElementIndices(iterator, jiterator);
            AssignValueToOddMatrixElement(&ResultMatrix, Indices);
            AssignValueToEvenMatrixElement(&ResultMatrix, Indices);
        }
    }

    return ResultMatrix;
}

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONIMPLEMENTATION_H
