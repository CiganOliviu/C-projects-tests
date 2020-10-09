#include <stdio.h>

int ReadNumber() {

    int Number;

    scanf("%d", &Number);

    return Number;
}

int GetSumOfDigitsForNumber(int Number) {

    int Digit, Sum;

    Sum = 0;

    while (Number != 0) {

        Digit = Number % 10;
        Sum += Digit;
        Number /= 10;
    }

    return Sum;
}

int GetControlDigitForNumber(int Number) {

    int ControlDigit = GetSumOfDigitsForNumber(Number);

    while (ControlDigit > 9)
        ControlDigit = GetSumOfDigitsForNumber(ControlDigit);

    return ControlDigit;
}

int TestCaseOne() {

    if (GetControlDigitForNumber(1234) == 1)
        return 1;

    return 0;
}

int TestCaseTwo() {

    if (GetControlDigitForNumber(5678) == 8)
        return 1;

    return 0;
}

int TestCaseThree() {

    if (GetControlDigitForNumber(987) == 6)
        return 1;

    return 0;
}

int main() {

    printf("%d\n", TestCaseOne());
    printf("%d\n", TestCaseTwo());
    printf("%d\n", TestCaseThree());

    return 0;
}
