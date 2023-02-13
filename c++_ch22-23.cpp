#include <stdio.h>


// 변수의 종류
// 1. 지역변수 - 스택 영역
// 2. 전역변수 - 데이터 영역
// 3. 정적변수 (static) - 데이터 영역
// 4. 외적변수 (extern) - 데이터 영역


// 메모리 영역
// 1. 스택 영역
// 2. 데이터 영역
// 3. 읽기 전용(코드, ROM)
// 4. 힙 영역


// 전역변수
int g_i = 0; // 메모리 영역: Data 영역

// Data 영역 특징
// 프로그램 시작 시 생성
// 프로그램 종료 시 해제

void Test();



int main() {
    Test();
    Test();
    Test();

    g_i = 0;

    return 0;
}


void Test() {
    ++g_i;
}