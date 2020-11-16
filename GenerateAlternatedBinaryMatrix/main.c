#include "IO/IOImplementation.h"
#include "ProblemSolution/ProblemSolutionImplementation.h"

int main() {

    struct MatrixType Matrix;

    Matrix = GenerateMatrix(5);

    OutputMatrix(Matrix);

    return 0;
}
