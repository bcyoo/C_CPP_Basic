// 변수

// 전역변수
int global = 0;

// 정적변수

// 외부변수

// 함수(기능)
int Add(int left, int right) {
    return left + right;
}


int main () {

    int data = 0;

    // data = 10 + 20;
    data = Add(10, 20);


    // 지역변수
    int iName = 0;
    // 중괄호 {}안에 변수는 {}안에만 적용
    { 
        int iName = 100;

        iName;
    }
    iName = 100;

    return 0;

}