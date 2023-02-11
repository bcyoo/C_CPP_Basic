#include <stdio.h>


int Factorial(int _iNum) {
    int ivalue = 1;

    for (int j = 0; j < _iNum - 1; ++j) {
        ivalue *= (j +2);
    }

    return ivalue;
}


// 재귀함수 : 함수안에서 자기 자신을 호출함

int main() {

    int iValue = Factorial(4);
    iValue = Factorial(10);

    return 0;
}