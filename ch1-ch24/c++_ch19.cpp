#include <stdio.h>


int Factorial(int _iNum) {
    int ivalue = 1;

    for (int j = 0; j < _iNum - 1; ++j) {
        ivalue *= (j +2);
    }

    return ivalue;
}


// 재귀함수 : 함수안에서 자기 자신을 호출함
// 가독성, 구현의 용이
// 속도가 느림

// 재귀함수 Factorial
int Factorial_Re(int _iNum) {

    if (_iNum == 1) {
        return 1;
    }

    return _iNum * Factorial_Re(_iNum -1);
}

// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55 ...
int Fibonacci(int _iNum) {
    if (_iNum == 1 || _iNum == 2) {
        return 1;
    }

    int iPrev1 = 1;
    int iPrev2 = 1;
    int iValue = 0;

    for (int j = 0; j < _iNum - 2; ++j) {
        iValue = iPrev1 + iPrev2;
        iPrev1 = iPrev2;
        iPrev2 = iValue;
    }
    return iValue;
}

int Fibonacci_Re(int _iNum) {
    if (_iNum == 1 || _iNum == 2) {
        return 1;
    }
    return Fibonacci_Re(_iNum -1) + Fibonacci_Re(_iNum - 2);
}


int main() {

    int iValue = Factorial(4);
    iValue = Factorial(10);
    iValue = Factorial_Re(10);

    iValue = Fibonacci(7);
    iValue = Fibonacci_Re(3);

    return 0;
}