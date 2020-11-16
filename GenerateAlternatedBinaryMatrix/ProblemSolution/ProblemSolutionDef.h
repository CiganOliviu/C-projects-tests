//
// Created by cigan on 15.10.2020.
//

#ifndef PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H
#define PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H

#include "../CoreDependencies/CoreDependencies.h"
#include "../Validations/ValidationsImplementation.h"
#include "../DataStructures/DataStructures.h"

int IsNotOdd(int Number);

struct ElementsIndices SetupMatrixElementIndices(int Line, int Column);

void AssignValueToOddMatrixElement(struct MatrixType * Array, struct ElementsIndices Indices);
void AssignValueToEvenMatrixElement(struct MatrixType * Array, struct ElementsIndices Indices);

int IsOdd(int Number);
struct MatrixType GenerateMatrix(int Length);

#endif //PROBLEMSOLVINGARHITECTURE_PROBLEMSOLUTIONDEF_H
