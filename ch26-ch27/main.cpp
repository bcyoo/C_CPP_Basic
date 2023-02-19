#include <stdio.h>

int main() {

    //// CH 26~27

    // 포인터 변수
    // 주소를 저장하는 변수
    // 자료형 + * 변수명 : 해당 포인터에게 전달된 주소를 해석하는 단위

    // int* pInt = nullptr; // nullptr : 이 pointer가 아무것도 가리키지 않는 의미
    
    // int i = 100;
    // float f = 3.f;
    
    // int* : int 4 byte 주소만 받겠다는 의미, 자기가 가리킬 data type 정하는것
    // int* pInt = &i; // & : int i라는 변수의 주소값을 가져옮

    // // 주소로 접근
    // (*pInt) = 100; // *pint 메모리주소에 있는 i에 100을 넣음

    // 주소의 단위 (정수, byte)


    //// CH 28

    // 복습
    // 포인터 변수
    // 자료형 변수
    int* pInt = nullptr;

    // int* : 주소를 저장하고, 주소를 접근했을 때 주소를 int 보겠다는 의미



    return 0;
}