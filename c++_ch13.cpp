#include <stdio.h> // 표준 입출력 header

int Add (int a, int b) {
    return a + b;
}

// 함수
int main() {

    // printf();
    // scanf();
    
    int iData = Add(100, 200);

    // 반복문 : 조건에 따라 조건이 완료되기 전까지 반복
    
    // for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/ ) {
    // }
    for ( int i = 0; i < 4; ++i) {
        if (i % 2 == 1) {
            continue; // continue : 다음 조건 체크를 진행
        }
        printf("For Output\n");

        // break; break : 반복문 종료
    }

    // while (/*조건 체크*/) {
    // }
    int i = 0;
    while (i < 2) {
        printf("While output\n");
        ++i;
    }

    return 0;
}