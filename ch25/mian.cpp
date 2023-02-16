#include <stdio.h>


// 전역변수
int g_i = 0; // 데이터 영역 메모리


#include "func.h"
#include "common.h"

// 정적변수
// static int g_iStatic = 0; // 데이터 영역 메모리
// cpp 파일 안에서만 인식

int Test() {
    static int i = 0; // 데이터 영역을 쓰지만 Test()함수 안에 선언할 경우 해당 함수 안에서만 사용가능

    ++g_i;
    ++i;

    return i;
}

// 외부변수


int main() {
    
    g_iStatic = 100;
    g_iExtern = 500;

    // g_iExtern = 500;
    Add(0,0);

    Test();
    Test();
    Test();
    Test();
    int iCall = Test();

    // printf("Test 함수 호출 횟수 : %d\n", iCall);

    return 0;
}