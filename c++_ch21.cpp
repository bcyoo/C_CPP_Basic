#include <stdio.h>

// C
// 사용자 정의 자료형
typedef struct _tagMyST {
    int a; // 4byte
    float f; // 4byte
}MYST;

typedef struct _tagBig {
    MYST k; // 4
    int i; // 4
    char c; // 1
}BIG;

typedef int INT; // typedef: type를 재정의, int > INT로 재정의

typedef struct NewStruct {
    int a;
    short s;
}NEWST;

int main() {
    // 구조체
    MYST t = {100, 3.14f}; // 8byte
    t.a = 10; // int part
    t.f = 10.2312f; // float part

    int iSize = sizeof(MYST); // C size 변수


    struct _tagMyST s; // C
    MYST s; // C
    _tagMyST s; // C++


    struct _tagBig b; // C
    BIG b; // C
    _tagBig b; // C++


    struct NewStruct a; // C
    NEWST a; // C
    NewStruct a; // C++

    INT a; // C

    return 0;
}